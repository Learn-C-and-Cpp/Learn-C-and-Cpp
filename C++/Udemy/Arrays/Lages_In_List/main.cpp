#include <iostream>
#define SIZE 5

int main()
{
    int my_array[SIZE]{};

    int max{};
    int min{};

    // std::cout << "Enter the size of an array: ";
    // std::cin >> total_elements;

    std::cout << "Enter the elements of an array:" << std::endl;
    for (int i = 0; i < SIZE; i++)
    {
        std::cin >> my_array[i];
    }
    std::cout << "Displaying elements of an array: " << std::endl;
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << my_array[i] << std::endl;
    }

    std::cout << " ----- Displaying lagerst elements -------- " << std::endl;
    max = my_array[0];  // the value at index 0 is assigned to the variable max
    for (int i = 0; i < SIZE; ++i)
    {
        if (max < my_array[i])  // if max is less than value of my_array[i] max is assigned the value at my_array[i]
            max = my_array[i]; 
    }
    
    std::cout << "lagerst elements is: " << max << std::endl;

    std::cout << " ----- Displaying smallest elements -------- " << std::endl;
    min = my_array[0];
    for (int i = 0; i < SIZE; ++i)
    {
        if (min > my_array[i])
            min = my_array[i];
    }
    
    std::cout << "lagerst elements is: " << min << std::endl;

    return 0;
}