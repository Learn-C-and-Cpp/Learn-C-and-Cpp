/**Static binding : associating function calls with function definitions
 * Achieve by normal function call, overloading or operator overloading 
 *  
*/

#include <iostream>

float sumNumbers(float a, float b)
{
    return a + b;
}

float sumNumbers(float a, float b, float c)
{
    return a + b + c;
}

int main()
{
    std::cout << sumNumbers(1, 2)<<std::endl; 
    std::cout << sumNumbers(1, 2, 3)<<std::endl;

    std::cin.get();
}