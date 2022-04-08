/* how to pass an array to a function
 * example
   int array[]{};

   function(int array[]) // the actual array is passed it is not copied
   {
   }

  */
#include <iostream>

int passValue(int value)
{
    value = 99;
}

void passArray(int prime[5])
{

    prime[0] = 11;
    prime[1] = 7;
    prime[2] = 5;
    prime[3] = 3;
    prime[4] = 2;
}

int main()
{
    int value{ 1 };
    std::cout << "before passValue = " << value <<std::endl;
    passValue(value);
    std::cout << "after passValue = " << value <<std::endl;
    std::cout << '\n';

    int prime[5] {2, 3, 5, 7, 11};
    std::cout << "before passArray = " << prime[0] << ","<< prime[1] <<","<<  prime[2] <<","<<  prime[3] <<","<<  prime[4] <<'\n';

    passArray(prime);
    std::cout << "after passArray = " << prime[0] <<","<<  prime[1] <<","<<  prime[2] << ","<< prime[3] << ","<< prime[4] <<'\n';


    return 0;
}
