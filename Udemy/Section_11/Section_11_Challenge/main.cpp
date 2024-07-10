/*
Functions:
Display menu // done
Read user selection and return in uppecase // done
function for each menu option
desplay the list of numbers
calculate the mean.
*/
#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
#include <algorithm>

// Fuction prototype diplaying menu and getting selection
void display_menu();
char read_user_selection_uppecase();

// handling function prototypes
void handle_display(const std::vector<int> &numbers);
void handle_add(std::vector<int> &numbers);
void handle_mean(const std::vector<int> &numbers);
void handle_smallest(const std::vector<int> &numbers);
void handle_largest(const std::vector<int> &numbers);
void handle_find(const std::vector<int> &numbers);

void hundle_unknown();
void handle_quit(char selection);

// prototype functions that work with the list
void display_list(const std::vector<int> &numbers);
int get_largest(const std::vector<int> &numbers);
int get_smallest(const std::vector<int> &numbers);
void sort_list(std::vector<int> &numbers);
double calculate_mean(const std::vector<int> &numbers);
void clear_list(std::vector<int> &numbers);
bool find(const std::vector<int> &numbers, int target);

int main()
{
    // Declare a vector of numbers
    std::vector<int> numbers;
    char selection{};

    do
    {
        display_menu();
        selection = read_user_selection_uppecase();

        switch (selection)
        {
        case 'P':
            handle_display(numbers);
            break;
        case 'A':
            handle_add(numbers);
            break;

        case 'H':
            handle_largest(numbers);
            break;

        case 'L':
            handle_smallest(numbers);
            break;
        case 'M':
            handle_mean(numbers);
            break;

        case 'C':
            clear_list(numbers);
            break;
        case 'S':
            sort_list(numbers);
            break;
        case 'F':
            handle_find(numbers);
            break;
            
        case 'Q':
            handle_quit(selection);
            break;

        default:
            hundle_unknown();
        }

    } while (selection != 'Q');

    return 0;
}
char read_user_selection_uppecase()
{
    char selection{};
    std::cout << "Enter your selection " << std::endl;
    std::cin >> selection;

    return std::toupper(selection);
}

void display_menu()
{

    std::cout << "P - Print numbers" << std::endl;
    std::cout << "A - Add number" << std::endl;
    std::cout << "M - Display mean of the numbers" << std::endl;
    std::cout << "H - Display the highest number" << std::endl;
    std::cout << "L - Display the lowest number" << std::endl;
    std::cout << "C - Clear list" << std::endl;
    std::cout << "S - Sort" << std::endl;
    std::cout << "F - Find a number" << std::endl;
    std::cout << "Q - Quit" << std::endl;
}
/*  --------------------------------------------------*/
void handle_add(std::vector<int> &numbers) // need to change no "const"
{
    int data_to_add{};
    std::cout << "Enter an integer to add to the list: " << std::endl;
    std::cin >> data_to_add;

    numbers.push_back(data_to_add);
    std::cout << data_to_add << " added" << std::endl;
}

void handle_display(const std::vector<int> &numbers)
{
    if (numbers.empty())
    {
        std::cout << "[] - the list is empty" << std::endl;
    }
    else
    {
        display_list(numbers);
    }
}
/*  --------------------------------------------------*/
void display_list(const std::vector<int> &numbers)
{
    std::cout << "[";
    for (auto number : numbers)
    {
        std::cout << number << " ";
    }
    std::cout << "]" << std::endl;
}
void handle_smallest(const std::vector<int> &numbers)
{
    if (numbers.empty())
    {
        std::cout << "Unable to determine the smallest number - list is empty" << std::endl;
    }
    else
    {
        std::cout << "The smallest number is: " << get_smallest(numbers) << std::endl;
    }
}

int get_smallest(const std::vector<int> &numbers)
{
    int smallest = numbers.at(0);
    for (auto i : numbers)
    {
        if (i < smallest)
        {
            smallest = i;
        }
    }
    return smallest;
}

void handle_largest(const std::vector<int> &numbers)
{
    if (numbers.empty())
    {
        std::cout << "Unable to determine the largest number - list is empty" << std::endl;
    }
    else
    {
        std::cout << "The lagest number is: " << get_largest(numbers) << std::endl;
    }
}

int get_largest(const std::vector<int> &numbers)
{
    int largest = numbers.at(0);
    for (const auto &i : numbers)
    {
        if (i > largest)
        {
            largest = i;
        }
    }
    return largest;
}

void handle_mean(const std::vector<int> &numbers) // handle_mean should not modify the vector
{
    if (numbers.empty())
    {
        std::cout << "Unable to calcutlate the mean - list is empty" << std::endl;
    }
    else
    {
        std::cout << "The mean is " << std::fixed << std::setprecision(2) << calculate_mean(numbers) << std::endl;
    }
}
double calculate_mean(const std::vector<int> &numbers)
{
    int sum{};
    for (auto number : numbers)
    {
        sum += number;
    }
    return static_cast<double>(sum) / numbers.size();
}

void sort_list(std::vector<int> &numbers)
{
    std::sort(numbers.begin(), numbers.end());
}

void clear_list(std::vector<int> &numbers)
{
    numbers.clear();
    std::cout << "List cleared " << std::endl;
}
void handle_find(const std::vector<int> &numbers)
{
    int target{};
    std::cout << "Enter the number to find: ";
    std::cin >> target;
    if (find(numbers, target))
    {
        std::cout << target << " was found" << std::endl;
    }
    else
    {
        std::cout << target << " was not found" << std::endl;
    }
}

void handle_quit(char selection)
{
    std::cout << "Goodbye ..." << std::endl;
}
void hundle_unknown()

{
    std::cout << "Unknown selection, please try again" << std::endl;
}
/*......................................*/
bool find(const std::vector<int> &numbers, int target)
{
    for (auto i : numbers)
    {
        if (i == target)
        {
            return true;
        }
    }

    return false;
}