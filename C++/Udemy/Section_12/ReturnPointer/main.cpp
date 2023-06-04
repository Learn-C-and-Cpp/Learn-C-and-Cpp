#include <iostream>

int *create_array(size_t size, int init_value);
void display(const int *const my_array, size_t size);

int main()
{
    int *my_array{nullptr};
    size_t size;
    int init_value{};

    std::cout << "How many integers would you like to allocate? " << std::endl;
    std::cin >> size;
    std::cout << "What value would you like them initialized to? " << std::endl;
    std::cin >> init_value;

    my_array = create_array(size, init_value);

    std::cout << "--------------------------- " << std::endl;

    display(my_array, size);
    delete[] my_array;

    return 0;
}

int *create_array(size_t size, int init_value)
{
    int *new_storage{nullptr};
    new_storage = new int[size];
    for (size_t i{0}; i < size; ++i)
    {
        *(new_storage + i) = init_value;
    }

    return new_storage;
}
void display(const int *const array, size_t size) // const int *const ptr;
{
    for (size_t i{0}; i < size; i++)
    {
        std::cout << array[i] << " "; // 
    }
    std::cout << std::endl;
}