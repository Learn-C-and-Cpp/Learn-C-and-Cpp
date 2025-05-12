// deep compy 57
#include <iostream>

// Class DeepCopy
class DeepCopy
{
    // Attributes
private:
    int *data;
    // Methods
    public:
    void set_data(int data_val) { *data = data_val; }
    int get_data() { return *data; }

    // Constructors
    DeepCopy(int value);
    DeepCopy(const DeepCopy &souce);
    ~DeepCopy();
};
// implementation
DeepCopy::DeepCopy(int value)
{
    data = new int;
    *data = value;
    std::cout << "One-arg constructor " << std::endl;
}
DeepCopy::DeepCopy(const DeepCopy &souce)
    : DeepCopy{*souce.data}
{
    std::cout << "Copy constructor " << std::endl;
}

DeepCopy::~DeepCopy()
{
    delete data;
    std::cout << "Destructor freeing data " << std::endl;
    
}
void display_deepCopy(DeepCopy dc)
{
    std::cout <<"Get data "<< dc.get_data() << std::endl;

}
int main()
{
    DeepCopy d1{100};
    display_deepCopy(d1);
    DeepCopy d2{d1};
    d2.set_data(1000);

    
    return 0;
}