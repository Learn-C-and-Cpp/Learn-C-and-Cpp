// Dynamic Memory

#include <iostream>

int main()
{
    int *int_ptr{nullptr};
    int_ptr = new int; // allocate sigle integer on the heap

    std::cout << int_ptr << std::endl;

    delete int_ptr; // free memory

    size_t size{0};
    double *temp_ptr{nullptr};

    std::cout << "How many temps ? " << std::endl;
    std::cin >> size;

    temp_ptr = new double[size]; // allocate array of doubles on the heap
    // temp_ptr = new double[size]; // allocate array of doubles on the heap
    std::cout << temp_ptr << std::endl;
    delete[] temp_ptr;

    return 0;
}
