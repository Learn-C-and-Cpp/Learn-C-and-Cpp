
/* to stop the loop use break, return, exit(0), goto;
 * for loop variable use signed integers
 */

#include <iostream>



int main()
{
    int num{1};
    int sum{ 0 };

    while(num <= 5) // itarate 5
    {
        int x{};

        std::cout << "Enter an integer #"<< num <<':';
        std::cin >> x;
        sum += x;

        //Increment counter
        ++num;

    }
    std::cout << "the sum of all numbers entered is: "<< sum <<'\n';




//    unsigned int num2{10 };

//    while(num2 >= 0)
//    {
//         if(num2 ==0)
//         {
//            std::cout << "blastoff!";
//         }
//         else
//         {
//         std::cout << num2 << ' ';
//
//
//         }
//    }

    return 0;
}
