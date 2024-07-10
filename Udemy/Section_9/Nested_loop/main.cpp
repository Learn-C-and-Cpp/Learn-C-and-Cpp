// nested loop 
#include <iostream>
int main()
{
    for (size_t i{1} ; i <=2; ++i)
    {
        for (size_t j{1}; j <= 3; ++j)
        {
            std::cout << i << ", " << j <<std::endl;
        }
        
    }

    
    
    return 0;
}