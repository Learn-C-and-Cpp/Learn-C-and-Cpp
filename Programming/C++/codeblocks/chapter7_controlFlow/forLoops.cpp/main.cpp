#include <iostream>

int pow(int base, int exponent)
{


    int total{ 1};

    for(int counter{ 0 }; counter < exponent; ++counter)
    {
     total*=base;
    }

    return total;

}

int sumTo(int value)
{
    int total{ 0 }; //non-loop variable


    for(int counter{ 1 }; counter<= value; ++counter )
    {
        total += counter;
    }
    return total;

}

int main()
{


//   for(int i{ 1 }; i <= 10; i= i+2)
//   {
//    std::cout << i << ' ';
//   }

//nested for loop
    for(char c{ 'a' }; c <= 'e'; ++c) //outer loop on letters
     {
         std::cout << c;//print out letters
         for(int i{ 0 }; i < 5; ++i)//inner loop on all numbers
         {
            std::cout << i;
         }// inner loop ends here

          std::cout <<'\n';
     } // outer loop ends  here


  // Print even numbers from 0 -20

  for(int counter{ 0 };counter <= 20 ; ++counter)
  {
   if(counter % 2 == 0)
       {
        std::cout << counter;
        std::cout << '\n';
       }
  } // outer loop exit

// Addition
 std::cout << "Sum to = "<< sumTo(5) <<' ';
 std::cout << pow(2, 10) << '\n';





   return 0;
}
