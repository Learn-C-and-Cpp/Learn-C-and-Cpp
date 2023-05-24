#include <iostream>

double getDouble()
{
    std::cout << "Enter a double value:\n";
    double x{ };
    std::cin >> x;
    return x;
}

char getOperator()
{
    std::cout << "Enter an Operator: +, - , * or /\n";
    char op{ };
    std::cin >> op;
    return op;
}
void printResults(double x, char operation , double y)
{
    switch(operation)
    {
    case '+':
    std::cout << x << " + " << y << " = " << (x + y) << '\n';
    break;
    case '-':
    std::cout << x << " - " << y << " = " << (x - y) << '\n';
    break;
    case '*':
        std::cout << x << " * " << y << " = " << (x * y) << '\n';
        break;
    case '/':
        std::cout << x << " / " << y << " = " << (x / y) << '\n';
        break;
    default:
    std::cout << "Error: .....";

    }

}

int main()
{

    double x{ getDouble() };
    char operation{ getOperator() };
    double y{ getDouble() };


    printResults(x, operation, y);



    return 0;
}
