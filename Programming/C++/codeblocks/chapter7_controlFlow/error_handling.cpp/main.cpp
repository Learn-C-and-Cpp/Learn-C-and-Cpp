#include <iostream>

int getValue()
{
  std::cout << "enter some value\n";
  int x{ };
  std::cin >> x;

  return x;
}

//bool printDivision(int x, int y)
//{
//    if(y == 0)
//    {
//        std::cerr << "Error: Could not divide by zero\n";
//        return false;
//    }
//
//        std::cout << static_cast<double>(x)/y ;
//        return true;
//    }

double doDivision( int x, int y)
{
    if(y==0)
    {
        std::cerr << "Error: Could not divide by zero\n";
        std::exit(1);
    }
    return static_cast<double>(x)/y;
}

int main()
{
    int x{ getValue() };
    int y{ getValue() };

//     printDivision(x , y);

    doDivision(x, y);

    return 0;
}
