/*Ternary operator
 (cond_expr) ? expr1: expr2

*/ 

#include <iostream>

int main()
{
    // int num{};
    // std::cout << "Enter an integer ";
    // std::cin >> num;
     
    //  if(num % 2 == 0)
    //  std::cout << num << " is even "<<std::endl;
    //  else
    //  std::cout << num << " is odd "<<std::endl;


    //  std::cout << num <<" is " <<((num % 2 == 0)?"even":"odd") << std::endl;

    // display smallest
    int num1{}, num2{};
    std::cout << "Enter two integers separated by a space: "<<std::endl;
    std::cin >> num1 >> num2;

    if(num1 != num2)
    {
        std::cout << "The largest "<< ((num1 > num2)?num1:num2) << std::endl;
        std::cout << "Smallest "<< ((num1 < num2)?num1:num2) << std::endl;

    }
    else
    {
        std::cout << "The integers are the same "<<std::endl;
    }

    return 0;
}