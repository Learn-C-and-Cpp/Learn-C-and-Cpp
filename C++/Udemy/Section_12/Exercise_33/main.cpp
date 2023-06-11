// Reverse an array using pointers

#include <iostream>

void reverse_array(int *arr, int size);
void array_reverse(int *arr, int size);

int main()
{

    int arr[]{1, 2, 3, 4, 5};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    // std::cout << "arr + 1 : " << *(arr + 4) << ", size: " << size - 1 << std::endl;

    reverse_array(arr, size);

    for (size_t i{0}; i < size; ++i)
    {
        std::cout << *(arr + i) << " ";
    }
    std::cout << "\n......................." << std::endl;
    // array_reverse(arr, size);
    return 0;
}
void reverse_array(int *arr, int size)
{
    int *start = arr;            // start
    int *end = (arr + size - 1); // end

    // for (; start < end; ++start, --end)
    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    // for (int i{size - 1}; i >= 0; --i)
    // {
    //     std::cout << *(arr + i) << " ";
    // }
    std::cout << std::endl;
}

// --------------------------------------------
void array_reverse(int *arr, int size)
{
    for (int *ptr = (arr + size - 1); ptr >= arr; --ptr)
    {
        std::cout << *ptr << " ";
    }
    std::cout << std::endl;
}