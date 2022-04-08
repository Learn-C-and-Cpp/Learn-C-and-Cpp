
/*10.05.2021
 *C++ arrays
 */
#include <iostream>

int main()
{
    int number[5]{};//hold  5 numbers
    number[0] = 2;
    number[1] = 3;
    number[2] = 5;
    number[3] = 11;
    number[4] = 7;



    std::cout << " Number as index 0 is " << number[0]<<'\n';
    std::cout << " the sum of the numbers is " << number[0] + number[1] + number[2] + number[3] + number[4]<<'\n';

    // array of doubles

   double doubleArray[3]{0.5,1.5, 2.5 };
   std::cout << doubleArray[0] << '\n';
   std::cout << doubleArray[1] << '\n';
   std::cout << doubleArray[2] << '\n';

   // an array can be made from struct
   struct Rectangle
   {
        int length{};
        int width{};
   };
   Rectangle rects[5]{}; // an array of 5 rectangles

   rects[0].length = 5;
   rects[0].width = 4;
   std::cout << "The area or rects[0] = "<< rects[0].length * rects[0].width <<'\n';

   rects[1].length = 10;
   rects[1].width = 8;
    std::cout << "The area or rects[0] = "<< rects[1].length * rects[1].width <<'\n';

   // fixed array declaration using an enumerator
   // constexpr int numberOfDoysPerWeek{ 7 };  // compile-time constant

  //  int thingToDo[numberOfDoysPerWeek]{};


    enum WeekDay
    {
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday,
        sunday,

        maxWeekday
    };
//    int lessonsPerDay[maxWeekday]{};









   return 0;
}
