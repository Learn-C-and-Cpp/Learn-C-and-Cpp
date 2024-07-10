#include <iostream>
#include <cmath> // required for rand
#include <ctime> // required for time

int main()
{
    int random_number{};
    size_t count{10}; // number of random numbers to generate
    int min{1};       // lower bound(inclusive)
    int max{6};       // upper bound(inclusive)

    // seed the random number gernerator
    // If you don't seed the generator you will get the same numbers every run

    std::cout << "Rand_max on my system is: " << RAND_MAX << std::endl; // 32767
   srand(std::time(nullptr));
    int ran_num = rand(); // % max + min; 
    std::cout << "Rand to RAND_MAX: " << ran_num << std::endl;

    for (size_t i{1}; i <= count; ++i)
    {
        random_number = rand() % max + min; // generate a random number [min, max]  - add min  to go from 012345 to 123456
        std::cout << random_number << std::endl;

    }    

    return 0;
}