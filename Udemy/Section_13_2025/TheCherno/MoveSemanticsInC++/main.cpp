// Copy vs moving objects and why do we want to move stomething
#include <iostream>
#include <cstring>

// class
class String
{
    // Attributes
private:
    char *m_data;
    size_t m_size;

    // Methods
public:
    /*Default constructor; default key word means use compiler-generated verision, delet key word means
     compiler should not generated verision*/

    String() = default;

    /**One-arg constructor
     *Takes in a string
     *Allocater memory
     *Copy data into the m_data buffer
     **/
    String(const char *source)
    {
        std::cout << "String Constructor called" << std::endl;
        m_size = strlen(source);        // get string stize of source
        m_data = new char[m_size];      // allocate space for the source's size
        memcpy(m_data, source, m_size); // compy source into m_data  buffer
    }
    // print string
    void PrinString()
    {
        std::cout << "string print called " << std::endl;
        for (size_t i = 0; i < m_size; i++)
        {
            std::cout << m_data[i];
        }
        std::cout << std::endl;
    }

    // Copy constructor
    String(const String &other)
    {
        std::cout << "String Copy Constructor called" << std::endl;
        m_size = other.m_size;                // get string stize of source
        m_data = new char[m_size];            // allocate space on the heap for the source ----
        memcpy(m_data, other.m_data, m_size); // compy source into m_data  buffer
    }
    // Move constructor
    String(String &&other) noexcept
    {
        std::cout << "String Move Constructor called" << std::endl;
        m_size = other.m_size;
        m_data = other.m_data;
       
        other.m_size = 0;
        other.m_data = nullptr;
    }

    // Destructor
    ~String()
    {
        std::cout << "String destructor called " << std::endl;
        delete m_data;
    }
};

// Consumer class
class Entity
{
    // Attributes
private:
    String m_Name;
    // Methods
public:
    void PrintName()
    {
        std::cout << "Entity print called " << std::endl;
        m_Name.PrinString();
    }
    Entity(const String &name) : m_Name(name)
    {
        std::cout << "Entity Constructor called " << std::endl;
    }
    // Move constructor take an R-Value(&&)
    Entity(String &&name) : m_Name(std::move(name)) // Move don't copy
    {
        
    }
    ~Entity()
    {
        std::cout << "Entity Destructor called " << std::endl;
    }
};

int main()
{
    // Entity entity(String("C++"));
    Entity entity{"C++"};
    entity.PrintName();
    return 0;
}