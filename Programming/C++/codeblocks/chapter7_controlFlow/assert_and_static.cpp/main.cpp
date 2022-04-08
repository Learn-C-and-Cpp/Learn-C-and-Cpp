
/*assert and static_assert1
 asser statment and a string literal for better messaging ( T && T = T, T && F = F, F & F = F )
 A string literal always evaluate to Boolean true

 */
#include <iostream> // for std::cout and std::cin
#include <cmath>// for sqr() and mathematical calculations
#include <string> //

//#define NDEBUG // to disable assert()
#include <cassert> // for assert() validating parameters


double calculateTimUnitsObjectHitGround( double initialHeight, double gravity)
{
    assert(gravity > 0.0  && "Gravity must be greater than zero "); // for the object to reach the ground the gravity must be greator-than zero

    if( initialHeight <= 0.0 )
    {
        // The object is already on the ground
        return 0.0;
    }

    return std::sqrt((2.0 * initialHeight)/gravity);
  }
  // c++11 static_assert
    static_assert(sizeof(int) == 4, "int must be 4 bytes");
    static_assert(sizeof(long) == 8, "long must be 8 bytes");

int main()
{

    std::cout << " Took " << calculateTimUnitsObjectHitGround(74.0, 9.8) << " seconds\n";

    std ::cout << std::boolalpha;

    // A string literal always evaluate to Boolean true

    std::string str{"Hello"};
    char ch{};
    if(0)
    {
        std::cout << " is true" <<'\n';
    }
    else
    {
        std::cout << "is false" <<'\n';

    }



    return 0;
}




