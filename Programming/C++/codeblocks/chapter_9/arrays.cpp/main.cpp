
#include <iostream>

/*Defines an enumeration called StudenName and  map to an numberOfStudents   array
 *the compiler will not allow implicit conversion of integers to enum value e.g, StudentNames name{ 5 }
  - do this auto student_kit{ static_cast<StudenNames>(5)};
 *the compiler will not allow inputs using std::cin
 */
enum  StudenNames
{
    student_kenny, //0
    student_kyle, //1
    student_stan, //2
    student_butters,//3
    student_cartman,//4
    max_student  // 5

};

// enum and std::cin
enum InputInteger
{
    inputInteger_0,
    inputInteger_1,
    inputInteger_2,
    inputInteger_3
//static cast integer input from std::cin

auto inputInteger_0{static_cast<InputInteger>(integer)};

InputInteger in{inputInteger_0 };
std::cout << in <<'\n';

// arrays and ennums - maping array to enums

//a class of five students
constexpr int numberOfStudents{ 5 }; // compile time constant

int testScores[ max_student]{ }; // array initialization
testScores[student_stan] = 76; // array assingment
std::cout <<"student_stan "<< testScores[student_stan] <<'\n';







   return 0;
}
