//—--------------------------

// reversing an array
#include <iostream>

void reverse_array(int *arr, int size);
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse_array(arr, size);

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }

    return 0;
}
void reverse_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > (arr[i] + 1))
        {
            arr[i] = (arr[i] + 1);
        }
    }
}
