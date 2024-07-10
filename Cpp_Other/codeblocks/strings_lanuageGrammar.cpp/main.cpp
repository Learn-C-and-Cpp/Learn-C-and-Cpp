#include <iostream>

int getUserInput()
{
    int i{ };
    std::cin >>i;
    return i;
}

int main()
{
    std::cout<< "How many bananas did you eat today?\n";

    if(int iBananasEaten{getUserInput()};iBananasEaten <= 2)
    {
    std::cout << "Yummy\n";
    }
    else
    {
    std::cout << iBananasEaten << " is alot!"<<'\n';
    }

    std::cout << "optinal\n";

    if(int ioptional{getUserInput()}; ioptional <=2)
    {
        std::cout << "our user optinal is = " << ioptional << '\n';
    }
    else
    {
    std::cout << "our user optinal is less  or grather than 2 = " << ioptional << '\n';

    }

//    if(int iBananasEeaten{getUserInput()};iBananasEeaten <=2 )
//    {
//
//    }
//    return 0;
}
