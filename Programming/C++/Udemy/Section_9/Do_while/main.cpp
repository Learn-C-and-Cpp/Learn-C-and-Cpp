/* Do-while
 * Simple selection menu
 */
#include <iostream>

int main()
{
    char selection{};
    do
    {
        std::cout << "-------------------------" << std::endl;
        std::cout << "1.Do this" << std::endl;
        std::cout << "2.Do that" << std::endl;
        std::cout << "3.Do something else" << std::endl;
        std::cout << "Q. Quit" << std::endl;

        std::cout << "Enter selection" << std::endl;
        std::cin >> selection;

        if(selection == '1')
        std::cout << "You chose 1 - do this" << std::endl;
        else if(selection == '2')
        std::cout << "You chose 2 - do that" << std::endl;
        else if(selection == '3')
        std::cout << "You chose 3 - do something else" << std::endl;
        else if(selection == 'q' || selection == 'Q')
        std::cout << "Goodbye..." << std::endl;
        else 
        std::cout << "Unknown option - try again..." << std::endl;    
        

    } while (selection != 'q' && selection !='Q');


    

        return 0;
}
// do a switch case