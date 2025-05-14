// Deep copy
#include <iostream>

class Deep
{
private:
    // attributes
    int *data;

public:
    // methods
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    // Constructor
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

Deep::Deep(int d)
{
    data = new int; // Allocate memory for an integer
    *data = d;      // Store d in the memory
}
Deep::Deep(const Deep &source)
{
    data = new int; // Allocate new memory space for an int
    *data = *source.data; // Store compied data for source
    std::cout << "Copy constructor - Deep copy: " << *source.data << std::endl;
}
Deep::~Deep()
{
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}
void display_Deep(Deep s)
{
    std::cout << s.get_data_value() << std::endl;
}
int main()
{
    Deep obj1{100};
    display_Deep(obj1);

    Deep obj2{obj1};
    obj2.set_data_value(1000);

    // std::cout << frank.get_name() << std::endl;

    return 0;
}