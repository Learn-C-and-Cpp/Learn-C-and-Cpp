
// Passing a pointer to a function that will multiply an integer

#include <iostream>

void multiply_with_pointer(int *ptr, int multiplier);

int main()
{
    int int_num{2};
    int mumltiplier{2};

    multiply_with_pointer(&int_num, mumltiplier);

    return 0;
}
void multiply_with_pointer(int *ptr, int multiplier)
{
    if (*ptr >= 1 && *ptr <= 100)
    {
        if (multiplier >= 1 && multiplier <= 100)
        {
            *ptr *= multiplier;
            
        }
    }
    std::cout << *ptr << std::endl;
}
