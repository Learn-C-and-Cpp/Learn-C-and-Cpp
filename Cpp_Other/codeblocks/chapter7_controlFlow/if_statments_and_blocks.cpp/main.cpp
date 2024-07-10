#include <iostream>
void printDigitName(int x )
{
    switch(x)
    {
        case 0:
        std::cout << "zero\n";
        break;
        case 1:
        std::cout << "one\n";
        break;
        case 2:
        std::cout << "two\n";
        break;
        default:
        std::cout << "unknown\n";
        break;
    }
    // break continues the function while return terminates the whole function

    std::cout << "End of switch block\n";

    //example [[fallthrough]]

    switch(x)
    {
        case 0:
        std::cout << "zero\n";
        break;
        case 1:
        std::cout << "one\n";
        break;
        case 2:
        std::cout << "two\n";
        [[fallthrough]]; // with null statement
        case 3:
        std::cout << "three\n";
        ;
        default:
        std::cout << "unknown\n";
        break;
    }

}

int main()
{
   std::cout << "Enter anumber \n";
   int number{ };
   std::cin >>number;

   if( number >=10 )
   {
     if( number <=20 )
        std::cout << number << "is between 10 and 20\n";
     else
         std::cout << number << "is greater than 20\n";

   }
   else
     {
     std::cout << number << "is less than 10\n";
     }

     if(number >= 10 && number <=20)
        std::cout << "number is between 10 and 20  \n";

        // null statement
        if(number > 10)
        ;

    printDigitName( number );


   return 0;
}
