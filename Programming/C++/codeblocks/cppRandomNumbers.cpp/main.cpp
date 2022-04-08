
#include <iostream>
#include<cstdlib> // for std::rand and std::srand
#include <ctime> // for std::time()
#include <random> // for std::mt19937

namespace MyRandom
{
    //initilize mersenne twister with a random seed based on the clock(once a system startsup)
    std::mt19937 mersenne{static_cast<std::mt19937::result_type>(std::time(nullptr))};

}
// fanction that needs a random number generator
int getRandomNumber(int min, int max)
{
    std::uniform_int_distribution die{min, max};// can generate distribution in any functiont that needs
    return die(MyRandom::mersenne);
}


int main()
{
//    std::srand(5323); // set initial seed value to 5323
//
//    std::rand(); // for better rand numbers
//
//    for(int counter = 1; counter <= 100; ++counter)
//    {
//        std::cout << std::rand() << '\t';
//
//        // print a new row after 5 numbers
//        if(counter % 5 == 0)
//            std::cout << '\n';
//
//
//    }



    //using ctime()


    std::srand(static_cast<unsigned int>(std::time(nullptr))); // set initial seed value to system clock

    for(int counter = 1; counter <= 10; ++counter)
    {
        std::cout << std::rand() << '\t';

        // print a new row after 5 numbers
        if(counter % 5 == 0)
            std::cout << '\n';


    }


/* using mersenne twister*
 * include random for std::mt19937
 * include ctime  for std::time
 */
    std::cout <<'\n';
    //initilize mersenne with random seed
    std::mt19937 mersenne{static_cast<std::mt19937::result_type>(std::time(nullptr))};
    //create a reusable RNG  number between 1-6
    std::uniform_int_distribution die{1, 6};

    for(int counter{ 0 }; counter <4; ++counter)
    {
         for(int counter {1}; counter <= 48; ++counter)
         {
            std::cout << die(mersenne)<< '\t'; // generate a roll of the die here
             // print a new row after 6 numbers start a new row
             if(counter % 6 == 0)
             std::cout << '\n';
        }
//        ++counter;
        std::cout <<'\n';

    }

    //pring a punch of numbers
    //int counter{ 0 };

//    while(counter < 4)
//    {
//         for(int counter {1}; counter <= 48; ++counter)
//         {
//            std::cout << die(mersenne)<< '\t'; // generate a roll of the die here
//             // print a new row after 6 numbers start a new row
//             if(counter % 6 == 0)
//             std::cout << '\n';
//        }
////        ++counter;
//        std::cout <<'\n';
    //}

std::cout <<'\n';

//std::cout << getRandomNumber(1, 6) <<'\n';

for(int i{1}; i<=48;++i)
{
std::cout << getRandomNumber(1, 6) <<'\t';
// print a new row after 6 numbers start a new row

if(i % 6 == 0)
std::cout << '\n';

}
//std::cout << getRandomNumber(1, 10) <<'\n';
//std::cout << getRandomNumber(1, 20) <<'\n';

    return 0;
}



/*between two numbers 1-6
 *max-min <= RAND_MAX // 5-3(2) <= 6
 *
 */
