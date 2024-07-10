#include <iostream>
#include <string>


int main()
{

   std::string str{ "I saw a red car yestarday " };

   str.replace(8, 3 ,"blue");// frome pos 8, replace 4 indexes

   std::cout << str << std::endl;




    return 0;
}
