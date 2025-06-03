// Constant reference in C++
#include <iostream>
#include <string>

class String
{
    // attributes
    std::string name;

private:
    // mothods
public:
    void set_string(std::string name_vale) { name = name_vale; }
    std::string get_string() { return name; }

    int printStringCopy(std::string arg);
    int printStringRef(const std::string &arg);

    //  constructors
    String(std::string str); // One-arg constructor
    ~String();
};
String::String(std::string str)
{
    std::cout << "Constructor called " << std::endl;
}
String::~String()
 {
     std::cout << "Destructor called " << std::endl; 
    }

int String::printStringCopy(std::string arg) // copy original to new object
{
    return arg.size();
}

int String::printStringRef(const std::string &arg)
{
    return arg.size();
}

// const_cast
void const_castReference(const std::string &arg)
{
    const_cast <std::string&> (arg) = "This is a new string";
}

int main()
{
    std::string string_value = "Hellow, world!";
    const std::string &string_ref = string_value;

    String str{string_value}; // Call to one-arg constructore
    std::cout << str.printStringCopy(string_value) << std::endl;
    
    String str2{string_ref}; // Call to one-arg constructore
    std::cout << str2.printStringRef(string_ref) << std::endl;


    void* ptr;
    std::cout << "sizeof(ptr) = "<< sizeof(ptr) << std::endl;
    std::cout << "sizeof(string_value) = "<< sizeof(string_value) << std::endl;
     
    // const_cast
    const_castReference(string_ref);        
    std::cout<< string_value << std::endl;

    

    return 0;
}