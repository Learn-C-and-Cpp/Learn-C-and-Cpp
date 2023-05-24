#include <iostream>

int getNumbe()
{
   std::cout << "Enter an integer\n";
   int number{ };
   std::cin >> number;
   return number;
}


char  getOperator()
{
   std::cout << "Enter an Operator\n";
   char op{ };
   std::cin >> op;
   return op;
}


int calculate(int x, int y,char ch)
{
    switch(ch) // +,-,*,/,%
    {
        case '+':
        return x + y;

        case '-':
        return x - y;

        case '*':
        return x * y;

        case '/':
        return x / y;

        case '%':
        return x % y;

        default:
            std::cout << "Invalid case\n";
        return 0;

    }
}

int main()
{

   int x{ getNumbe() };
   int y{ getNumbe() };
   char op{ getOperator() };



   std::cout << x << ' ' << op <<' '<< y << " =  " << calculate(x, y, op );


    return 0;
}
