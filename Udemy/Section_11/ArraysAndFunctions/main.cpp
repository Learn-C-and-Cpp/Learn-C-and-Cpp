// Arrays and functions

#include <iostream>
#include <cmath>

// prototypes
void print_array(const int arr[], size_t);
void set_array(int arr[], size_t size, int value);


int main()
{
    int my_scores[]{100, 98, 90, 86, 84};
    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);   
    print_array(my_scores, 5);

    return 0;
}

void print_array(const int arr[], size_t size)
{
    for (size_t i {0}; i < size; ++i)
    {
        std::cout << arr[i] <<" ";
    }
    std::cout << std::endl;    
    //arr[0] = 5000;


}

// set each array element to value
void set_array(int arr[], size_t size, int value)
{
    for (size_t i {0}; i < size; ++i)
    {
        arr[i] = value;
    }    

}

