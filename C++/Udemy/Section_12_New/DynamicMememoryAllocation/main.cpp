//Dynamic Memory
#include<iostream>
int main()
{
    int *int_ptr{nullptr};

    // allocate memory from the heap
    int_ptr = new int;
    std::cout << int_ptr <<std::endl;
    // free the storage
    delete int_ptr;

    size_t size{0};
    double *temp_ptr{nullptr};
    std::cout << "How many temps? " <<std::endl;
    std::cin >> size;

    temp_ptr = new double[size];

    std::cout << temp_ptr <<std::endl;

    delete [] temp_ptr;



    return 0;
}