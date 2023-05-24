#include <iostream>



int main()
{
   std::cout << "Enter a number \n";
   int number{ };
   std::cin >> number;

   std::cout << std::boolalpha;
   bool zero{(number == 0)};
   if( zero )
   std::cout << "the value is zero \n";
   if(!zero )
  std::cout << "the value is non-zero \n";
  std::cout << zero <<'\n' ;


    return 0;
}
