// Practice deep copy
#include <iostream>

class DeepCopy
{
    // attributes
private:
    int *data;
    // methods
public:
    // setters and getters
    void set_data(int data_val) { *data = data_val; }
    int get_data() { return *data; }
    // Constructors

    DeepCopy(int d);
    DeepCopy(const DeepCopy &copy);
    // Destructor
    ~DeepCopy();
};
// implementation
DeepCopy::DeepCopy(int d)
{
    data = new int;
    *data = d;
}

DeepCopy::DeepCopy(const DeepCopy &source)
    /*: data(source.data)*/
{
    data = new int; // storage for the compy of what we are pointing to  then compy the data
    *data = *source.data;

    std::cout << "Copy constructor -shallow copy " << std::endl;
}

DeepCopy::~DeepCopy()
{
    // free storage
    delete data;
    std::cout << "Destructor called" << std::endl;
}

void display_DeepCopy(DeepCopy copy)
{
    std::cout << copy.get_data() << std::endl;
}

int main()
{
    DeepCopy d1{100};
    display_DeepCopy(d1);
    DeepCopy d2{d1}; // copy d1 into d2
    d2.set_data(1000);

    return 0;
}