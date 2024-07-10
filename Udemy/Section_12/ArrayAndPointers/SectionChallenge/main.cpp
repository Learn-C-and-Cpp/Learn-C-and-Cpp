// section challenge

#include <iostream>

int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2); // not changing pointers and what they are pointing to
void print(const int *const arr, size_t size);

int main()
{
    const size_t arr1_size{5};
    const size_t arr2_size{3};

    int arr1[]{1, 2, 3, 4, 5};
    int arr2[]{10, 20, 30};

    std::cout << "Arra 1: " << std::endl;
    print(arr1, 5);
    std::cout << std::endl;

    std::cout << "Arra 2: " << std::endl;
    print(arr2, 3);
    std::cout << std::endl;

    int *results = apply_all(arr1, arr1_size, arr2, arr2_size);

    constexpr size_t results_size{arr1_size * arr2_size};

    print(results, results_size);

    std::cout << std::endl;

    delete[] results;
    std::cout << std::endl;

    return 0;
}
int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2)
{
    int *new_array{nullptr};
    new_array = new int[size1 * size2];

    int position{0}; // new_array index

    for (size_t i{0}; i < size2; ++i)
    {
        for (size_t j{0}; j < size1; ++j)
        {
            new_array[position] = (*(arr1 + j)) * (*(arr2 + i));
            ++position;
        }
    }

    return new_array;
}

void print(const int *const arr, size_t size) // constant pointer to a constant integer - can't change the pointer or what it is pointing to.
{
    std::cout << "[";
    for (size_t i{0}; i < size; ++i)
    {
        std::cout << *(arr + i) << " "; // offset notation
    }
    std::cout << "]";
    std::cout << std::endl;
}
