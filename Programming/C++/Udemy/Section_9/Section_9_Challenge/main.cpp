/*
    This challeng is about using a collection(list) of integers and allowing  the user to sellect
    options from a menu to perform operation on the list.

    Your program should display a menu option to the user as follows:

    P - Print numbers
    A - Add number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the lagest number
    Q - Quit

    Enter your choce:

    Details:
    -The program should only accept valid choices from the user both upper lower allowed. // Done
    -if illigal - display "Unknown selection, please try again" and display the menu again //

    -if the user enters 'P' or 'p',  display all the elements in the list //
    -if the list is empty,display "[] - the list is empty" // vec.empty()
    -if the list is not empty, display all the list elements in side a [] separated by a space e.g., [1 2 3 4 5] //
    -if the user enter 'A' or 'a' the you should promt the user for an integer to add to the list. then display e.g., "5 added" //

    -if 'M' or 'm' calculate the mean or average of the list and display it. If the list is empty display "Unable to calcutlate the mean - no data" //

    -if 'S' or 's' iterat through list and find the smallest element in the list. e.g., "The smallest is 1"
    -if the list is empty,display "Unable to determine the largest number - list is empty"

    -If the user enters 'Q' of 'q' the display "Goodbye"  and the program should terminate //

    Hint: use a vector to grow dinamically

    Addition:
    -search for a number in the list and how many times it occurs
    -clearing out the list(make it empty again). use vector class a.clear() method  -> vector::clear
    -don't allow duplicated entries
    -Own ideas!

    --------------------------------------------------------------------------------------

    Strategy:
    [1].Menu:
    -use do-while loop
    -use if()
    [2]. for() print vector contents
    [3].
    [4].
*/

#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
    // Declare a vector on numbers
    std::vector<int> data_set{};
    // Menu
    char selection{};

    do
    {
        // Display menu
        std::cout << "P - Print numbers" << std::endl;
        std::cout << "A - Add number" << std::endl;
        std::cout << "M - Display mean of the numbers" << std::endl;
        std::cout << "S - Display the smallest number" << std::endl;
        std::cout << "L - Display the lagest number" << std::endl;
        std::cout << "Q - Quit" << std::endl;

        std::cout << "Enter your selection " << std::endl;
        std::cin >> selection;

        if (selection == 'p' || selection == 'P')
        {
            if (data_set.empty()) // return trune if empty
            {
                std::cout << "[] - the list is empty" << std::endl;
            }
            else
            {
                std::cout << "[";
                for (auto number : data_set)
                {
                    std::cout << number << " ";
                }
                std::cout << "]" << std::endl;
            }
        }

        else if (selection == 'A' || selection == 'a')
        {
            int value{};
            std::cout << "Enter an integer to add to the list: " << selection << std::endl;
            std::cin >> value;

            data_set.push_back(value); // adding data
            std::cout << value << " added" << std::endl;
        }
        else if (selection == 'M' || selection == 'm')
        {
            if (data_set.empty()) // return trune if empty
            {
                std::cout << "Unable to calcutlate the mean - no data " << std::endl;
            }
            else
            {
                int total{};
                for (auto value : data_set)
                {
                    total += value;
                }
                double average = static_cast<double>(total) / data_set.size();
                std::cout << "The mean is " << std::fixed << std::setprecision(2) << average << std::endl;
            }
        }

        else if (selection == 'S' || selection == 's')
        {
            if (data_set.empty())
            {
                std::cout << "Unable to determine the smallest number - list is empty" << std::endl;
            }
            else
            {
                int smallest = data_set.at(0); // set smallest equals to data_set at 0
                for (auto number : data_set)
                {
                    if (number < smallest) // if number read smaller than smallest
                    {
                        smallest = number; // set smallest equal to that number
                    }
                }
                std::cout << "The smallest number is: " << smallest << std::endl;
            }
        }
        else if (selection == 'L' || selection == 'l')
        {
            if (data_set.empty())
            {
                std::cout << "Unable to determine the largest number - list is empty" << std::endl;
            }
            else
            {
                int lagest = data_set.at(0); // set lagest equals to data_set at 0
                for (auto number : data_set)
                {
                    if (number > lagest) // if data set is less
                    {
                        lagest = number; // set lagest equal to data_set at(i)q
                    }
                }

                std::cout << "The lagest number is: " << lagest << std::endl;
            }
        }
        else if (selection == 'Q' || selection == 'q')
        {
            std::cout << "Goodbye ..." << std::endl;
        }
        else
        {
            std::cout << "Unknown selection, please try again" << std::endl;
        }

    } while (selection != 'Q' && selection != 'q');

    return 0;
}
