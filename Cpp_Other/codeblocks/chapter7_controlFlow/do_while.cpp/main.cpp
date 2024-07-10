
//prefer or favor while loop

#include <iostream>


int main()
{
   int selection{ 0 };

   do
   {
     std::cout << "Please make a selection: \n";
     std::cout << "Addition: \n";
     std::cout << "Subtraction: \n";
     std::cout << "MultiPlication: \n";
     std::cout << "Division: \n";
     std::cin >> selection;
   }
   while( selection != 1 && selection != 2 && selection != 3 &&  selection != 4);

    // todo

   std::cout <<"Your selected option # " << selection << '\n';


   return 0;
}
