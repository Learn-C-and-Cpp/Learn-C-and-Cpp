// Find the maximum elemnt of an arry using pointers

#include <iostream>

int find_max_element(int *arr, size_t size);

int main()
{
    int arr[] = {12, 45, 95, 67, 23, 9};

    size_t size = sizeof(arr) / sizeof(arr[0]); // Find the size of an array
    std::cout <<"arr addres: "<< &arr << std::endl;

    int maxElement = find_max_element(arr, size);
    std::cout << maxElement << std::endl;
    return 0;
}

int find_max_element(int *arr, size_t size)
{
    int max = *arr; // take arr[0] as max

    for (size_t i{1}; i < size; ++i)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }
    return max;
}
