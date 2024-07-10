

/*using pseudo random generators (PRNG) takes a starting number called seed

 *in #include <cstdlib.h>
 *C and C++ uses std::srand() -> sets the initial seed
 * std::rand() -> generatets the next random number in the sequence
 * std::time() from ctime.h

 *revisit
 -rand() return  0-RAND_MAX( inclusive )

 */


#include <iostream>
#include <cstdlib>
#include <ctime>

//Generating random numbers between two arbitrary values
//int gerRandomNumbers(int min_r, int max_r) //(1,6)
//{
//
//}

unsigned int PRNG()
{
    // initial starting seed
    static unsigned int seed{ 5323 };

    // take the current seed and generate a new value from it
    seed = 8253729 * seed +2396403;

    //take the seed and return a value  between 0-32767
    return seed % 32767;

}


int main()
{
    //print 100 random numbers
    for(int counter{ 1 }; counter <= 100; ++counter)
    {
        std::cout << PRNG() <<'\t';

        if( counter % 5 == 0 )
        std::cout<<'\n';
    }

// --------------------------------------------cstdlib
std::cout<<'\n';



//set initial value
std::srand(5323);

//due to flaws in some compilers call std::rand() once for better random numbers
std::rand();

//print 100 random numbers
for(int counter{ 1 }; counter <= 100; ++counter)
{
    std::cout << rand() <<'\t';

  //if we have printed 5 numbers, start an new row
  if( counter % 5 == 0 )
  std::cout<<'\n';
}

std::cout<<'\n';
// --------------------------------------------using ctime.h
std::cout<<'\n';

std::cout<< "Using ctime.h" <<'\n';

//set initial seed value to system clock
//std::srand(static_cast<unsigned int>(std::time(nullptr))); // casting nullptr to unsigned int

std::srand(time(nullptr));

//print 100 random numbers
for(int counter{ 1 }; counter <= 100; ++counter)
{

std::cout << std::rand() <<'\t';

//  if we have printed 5 numbers, start an new row
  if( counter % 5 == 0 )
  std::cout<<'\n';
}
std::cout<<'\n';






   return 0;
}
