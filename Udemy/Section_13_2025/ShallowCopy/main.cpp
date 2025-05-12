// Shallow copy
#include <iostream>

class Shallow
{
private:
    // attributes
    int *data;

public:
    // methods
    void set_data_value(int d)
    {
        *data = d;
    }
    int get_data_value()
    {
        return *data;
    }
    // Constructor
    Shallow(int d);
    Shallow(const Shallow &source);
    ~Shallow();
};

Shallow::Shallow(int d)
{
    data = new int; // allocate space
    *data = d;      // store d in the space
}
Shallow::Shallow(const Shallow &source)
    : data(source.data)
{
    // this->data=source.data;

    std::cout << "Copy constructor - shallow copy" << std::endl;
    std::cout << "Source.data " << source.data << std::endl;
    std::cout << "*source.data " << *source.data << std::endl;
    std::cout << "This->data " << *(this->data) << std::endl;
}
Shallow::~Shallow()
{
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}
void display_shallow(Shallow s) // copy object using a copy constructor
{
    std::cout << s.get_data_value() << std::endl;
}
int main()
{
    Shallow obj1{100};
    display_shallow(obj1);

    Shallow obj2{obj1};
    obj2.set_data_value(1000);

    // std::cout << frank.get_name() << std::endl;

    return 0;
}