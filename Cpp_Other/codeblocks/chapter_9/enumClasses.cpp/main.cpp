
/*enun class dose not have implicit type conversion
 *
 */
#include <iostream>

enum class StudentNames
{
    keny,// 0
    kyle,
    stan,
    butters,
    cartman,
    wendy,
    max_students // 6
};

// studard enum inside a namspace
namespace Color
{
    enum Color
    {
        color_red,
        color_yellow,
        color_green,
        max_color

    };

}



int main()
{
    //enum variable


    int testScore[static_cast<int>(StudentNames::max_students)]{ }; // Enum map to array allocates 6 integers
    testScore[static_cast<int>(StudentNames::stan)] = 76;

    std::cout<<"testScore =  " << testScore[2] << '\n';


//using namespaces
    int numberOfColors[Color::max_color]{ }; // allocate 4 integeres
    numberOfColors[Color::color_green] = 15;
    std::cout << " numberOfColors " <<  numberOfColors[2] <<'\n';





    return 0;
}
