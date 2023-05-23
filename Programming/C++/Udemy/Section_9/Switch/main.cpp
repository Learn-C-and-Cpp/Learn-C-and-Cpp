// switch statement
/*
-ask the user to enter expected grade
-the program tell what score is associated with is

*/

#include <iostream>

int main()
{
    char letter_grade{};
    std::cout << "Enter the letter grade you expect on the exam:" << std::endl;
    std::cin >> letter_grade;

    switch (letter_grade)
    {
    case 'a':
    case 'A':
        std::cout << "You need a 90 or above, study hard!" << std::endl;
        break;
    case 'b':
    case 'B':
        std::cout << "You need a 80-89 for B, go study !" << std::endl;
        break;
    case 'c':
    case 'C':
        std::cout << "You need a 70-79 for an avarage grade" << std::endl;
        break;
    case 'd':
    case 'D':
        std::cout << "Hmm, you should strive for a better grad. All you need is 60-69" << std::endl;
        break;
    case 'f':
    case 'F':
        {
            char confirm{};
            std::cout << "Are you sure(Y/N)" << std::endl;
            std::cin >> confirm;

            if(confirm == 'y' || confirm == 'Y')
            {
                std::cout << "Ok, I guess you did not study" << std::endl;
            }else if(confirm == 'n' || confirm == 'N')
            {
                std::cout << "Good- go study!" << std::endl;
            }else
            std::cout << "illegal choice" << std::endl;
            break;
        }
                
    default:
        std::cout << "Sorry, not a valid grade" << std::endl;
    }

    return 0;
}
