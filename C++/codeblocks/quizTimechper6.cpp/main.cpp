
/*quiz 1,
 *2 add canstants.h and inline constexpr
 *3
 */


#include <iostream>
#include "canstants.h"

int getNumber()
{
    std::cout << "How many students in a class? \n";
    int num{ };
    std::cin >>num;

    if( num < 0)
    {
        std::cout << "Negative number entered. Making it positive.\n";
        num = -num;
    }

    return num;
}



//quiz 2
void checkStudentNumber(const int students)
{
    if( students > constants::max_class_size)
    {
        std::cout << "There are too many students in this class \n";
    }else
    {
        std::cout << "This class isn't too large \n";
    }


}

// pass fail

bool passOrFail()
{
    static int passes{3};
    return (--passes >=0);
}

void printNumber(int num)
{
    std::cout << " number = " << num <<'\n';
}

int main()
{
    //quiz 1
    //getNumber();
    checkStudentNumber(getNumber());

    std::cout << "user #1: " << (passOrFail()?"pass":"fail")<< '\n';
    std::cout << "user #2: " << (passOrFail()?"pass":"fail")<< '\n';
    std::cout << "user #3: " << (passOrFail()?"pass":"fail")<< '\n';
    std::cout << "user #4: " << (passOrFail()?"pass":"fail")<< '\n';
    std::cout << "user #5: " << (passOrFail()?"pass":"fail")<< '\n';

    return 0;
}
