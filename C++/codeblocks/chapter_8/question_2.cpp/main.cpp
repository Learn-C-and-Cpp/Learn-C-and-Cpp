
/*creating a truct to hold a fruction - struct Fraction
 *integer numerator (int numerator)
 *interger denomenator(int denomenator)
 *declare 2 fraction variables - read from user
 *declare funtion getFraction()
 *function Multiply(frandtion1, fraction2)
 *function printResults()
 */

#include <iostream>
#include <limits>

//creating a truct to hold a fruction - struct Fraction
//integer numerator (int numerator)
//*interger denomenator(int denomenator)

void ignoreLie( )
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
}

struct Fraction
{
    int numerator{ };
    int denominator{ };

    // declare 2 fraction variables - read from user
};

//declare funtion getFraction()
 Fraction getFraction()
 {
    Fraction temp{ };
   while(true)
   {
      std::cout << "Enter numerator : " <<'\n';
      std::cin>> temp.numerator;

      std::cout << "Enter denomenator: " <<'\n';
      std::cin>> temp.denominator;

      if(std::cin.fail())
      {
        std::cin.clear(); //reset
        ignoreLie(); // remove bad input

      }
      else
      {
       ignoreLie();

       return temp;
      }

    }
 }

// *function Multiply(frandtion1, fraction2)
double multiply(Fraction frandtion_1, Fraction fraction_2)
{
//to decimal
return (static_cast<double>(frandtion_1.numerator * fraction_2.numerator) / (frandtion_1.denominator * fraction_2.denominator ));
}


// *function printResults()
void printResult( Fraction result)
{
//   std::cout << "Fractim multiplication = " << result <<'\n';

}

int main()
{

  const Fraction fraction_1{ getFraction() }; // use const - should not be accidentaly changed
  const Fraction fraction_2{ getFraction() };

  const double result{ multiply(fraction_1, fraction_2) };

  std::cout << "result  " << result <<'\n' ;



    return 0;
}
