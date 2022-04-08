#include <iostream>



int main()
{
   int i{ 0 };

   while(i <= 10)
   {
        //std::cout << i ;
       int k{ 0 };
       while(k <= i)
       {
        std::cout << k <<' ';
        ++k;

       }

        std::cout << '\n';// print new line
        ++i; //update i

   }

    return 0;
}
