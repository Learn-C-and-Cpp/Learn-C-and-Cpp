#include<iostream>

void double_data(int *intPtr)
{
    *intPtr *=2;
}

int main()
{
    int value{10};
    int *intPtr{nullptr};

    std::cout << "Value: " << value <<std::endl;
    double_data(&value);
    std::cout << "Value: " << value <<std::endl;

    intPtr = &value;
    double_data(intPtr);
    std::cout << "Value: " << value <<std::endl;

    return 0;
}