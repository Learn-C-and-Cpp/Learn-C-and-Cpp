#include <iostream>

int pow(int base, int exponent)
{
    int total{1};

    for(int counter{ 0 }; counter < exponent; ++counter)

    total *= base;


    return total;
}

int sumTo(int input)
{
    int sum{0};

    for(int i{ 1 }; i <= input; ++i)

    sum  += i;

    return sum;
}

int main()
{
    std::cout << " pow = " << pow(2,3);
    std::cout <<'\n';

    std::cout << " sumTo  = " << sumTo(5) <<'\n';





//    for(int i{9}; i >=0; i-=2)
//    {
//    std::cout<< i <<' ';
//    }
//
//    std::cout<< '\n';


//    int j{ 0 };
//    while(j < 10)
//    {
//        std::cout << j <<' ';
//        ++j;
//    }

 // nested loop

for (char c{ 'a' }; c <= 'e'; ++c )
    {
        std::cout << c <<' '; //print a latter

        for(int i{ 0 };i < 3; ++i)
        std::cout << i;
        std::cout <<'\n';

    }


for(int i{ 0 }; i <= 20; ++i)
{
    if(i%2 == 0)
    std::cout << i <<' ';

}

//for(unsigned int counter{9}; counter >=0; --counter)// is an ifinite loop
//std::cout << counter << '\n';









    return 0;
}
