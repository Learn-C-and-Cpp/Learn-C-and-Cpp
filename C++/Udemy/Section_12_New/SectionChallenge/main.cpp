#include<iostream>

int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2)
{
    int *new_array{nullptr};

    new_array = new int[size1 * size2];

    int position{0};

    for(size_t i{0}; i < size2; i++)
    {
        for(size_t j{0}; j < size1; j++)
        {
            new_array[position] = arr1[j] * arr2[i];
            ++position;
        }
    }

    
   return new_array;

}



// display
void display(const int *const arr3, size_t size) // can't change pointer and what it is pointing to.
{
    std::cout << "[";
    for (size_t i{0}; i < size; i++)
    {
        std::cout << *(arr3 + i) <<" ";
    }
    std::cout << "]" << std::endl;
    std::cout << " " << std::endl;   

}

int main()
{

    const size_t array1_size{5};
    const size_t array2_size{3};

    int arr1[]{1,2,3,4,5};
    int arr2[]{10,20,30};
    


    int *result = apply_all(arr1, array1_size, arr2, array2_size);

    constexpr size_t resuls_size{array1_size * array2_size};

    std::cout <<"Result "<< std::endl;
    display(result, resuls_size);

    delete [] result;    

    return 0;
}