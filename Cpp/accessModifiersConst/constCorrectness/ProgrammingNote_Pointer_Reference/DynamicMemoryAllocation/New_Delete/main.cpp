/**Dynamic memory allocation using New and delete Operators
 * Often like int number, int numberPtr = &number;
 * */
#include <iostream>

int max(const int *arr, int size); // array cannot be modifed in the function
void replaceByMax(int arr[], int size);
void print(const int arr[], int size);

int main()
{
    // const int SIZE = 5;
    int *arrayPtr;
    std::cout << "Size of arrayPtr in main " << sizeof(arrayPtr) << std::endl;
    // arrayPtr = new int[SIZE];

    // for (int i = 0; i < SIZE; ++i)
    // {
    //     *(arrayPtr + i) = rand() % 100;
    // }

    // for (int i = 0; i < SIZE; ++i)
    // {
    //     std::cout << *(arrayPtr + i) << " ";
    // }
    // std::cout << " " << std::endl;

    // delete[] arrayPtr;

    //  initialise array

    
    const int SIZE = 5;
    int numbers[SIZE] = {11, 22, 33, 22, 55};

    std::cout << "address of numbers in main " << numbers << std::endl;
    std::cout << "Size of numbers in main " << sizeof(numbers) << std::endl;
    std::cout << max(numbers, SIZE) << std::endl;

    replaceByMax(numbers, SIZE);

    print(numbers, SIZE);

    return 0;
}

int max(const int *arr, int size)
{
    std::cout << "address of arr in max " << arr << std::endl;
    std::cout << "Size of numbers in max " << sizeof(arr) << std::endl;
    int max = arr[0];
    for (int i = 1; i < size; ++i)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
void replaceByMax(int arr[], int size)
{
    int maxValue = max(arr, size);

    for (int i = 0; i < size; ++i)
    {
        *(arr + i) = maxValue;
    }
}
// pritting content
void print(const int arr[], int size)
{
    std::cout << "{";
    for (int i = 0; i < size; ++i)
    {
        std::cout << *(arr + i) << "";
        if (i < size - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;
}