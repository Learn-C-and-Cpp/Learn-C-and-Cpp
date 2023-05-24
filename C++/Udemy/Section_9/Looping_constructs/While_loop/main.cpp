/*
while loop
*/
#include <iostream>

int main()
{
    // int num{};
    // std::cout <<"Enter a positive integer - start the countdown:";
    // std::cin >> num;

    // // count down
    // while(num > 0)
    // {
    //     std::cout << num << std::endl;
    //     --num;
    // }
    // std::cout << "Blastoff!" << std::endl;

    // count up
    // int num{}; // target
    // std::cout <<"Enter a positive integer to count up to:";
    // std::cin >> num;

    // // count down
    // int i{1};
    // while(num >= i)
    // {
    //     std::cout << i << std::endl;
    //     ++i;
    // }

    // int number{};
    // std::cout << "Enter integer less than 100:";
    // std::cin >> number;

    // while (number >= 100) // !(number < 100)
    // {
    //     std::cout << "Enter integer less than 100: ";
    //     std::cin >> number;
    // }
    // std::cout << "Thanks" << std::endl;

    // Using boolean flag to do input validation
    bool done{false}; // set to not done!
    int number{0};
    while(!done)
    {
        std::cout << "Enter an integer between 1 and 5:";
        std::cin >> number;
        // check for validation
        if (number <= 1 || number >= 5)
        {
            std::cout << "Out of range, try again" << std::endl;
        }
        else
        {
            std::cout << "Thanks!" << std::endl;
            done = true;
        }
    }

    // side note
    bool flag{false};
    while (!flag)
    {
        char again{};
        std::cout << "Do you want to loop again? (Y/N) : ";
        std::cin >> again;

        if(again == 'N' || again == 'n')
        break;
    }
    

    


    return 0;
}