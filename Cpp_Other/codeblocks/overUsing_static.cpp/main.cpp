
/// overusing the local variable

#include <iostream>
int getInteger()
{
    static bool isFirstCall{ true };

    if(isFirstCall)
    {
        std::cout << "Enter an integer :";
        isFirstCall = false;
    }
    else
    {
        std::cout << " Enter another integer: ";
    }

    int i{ };
    std::cin >> i;
    return i;
}


int main()
{
    int a{ getInteger() };
    int b{ getInteger() };

    std::cout << a << " + " << b << " = " << (a + b) <<'\n';

    int c{ getInteger() };
    int d{ getInteger() };
    std::cout << c << " - " << d<< " = " << (c - d) <<'\n';

    return 0;
}
