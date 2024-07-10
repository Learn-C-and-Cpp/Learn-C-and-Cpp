// Using Default Argument Values
#include <iostream>
#include <iomanip>
#include <string>

void print_grocery_list( int apples = 3, int oranges = 7,int mangos = 13);
void modify_grocery_list();


int main()
{
   modify_grocery_list();

    return 0;
}

void print_grocery_list( int apples, int oranges, int mangos)
{
    std::cout <<"apples = "<< apples << std::endl;
    std::cout <<"oranges = " << oranges  << std::endl;
    std::cout <<"mangos = " << mangos << std::endl;

}
void modify_grocery_list()
{
    print_grocery_list();
    print_grocery_list(5);
    print_grocery_list(7, 11);

}