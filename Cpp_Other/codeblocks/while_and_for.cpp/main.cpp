
/*using an if condition in a while loop
 *
*/
#include <iostream>


int main()
{
//    int counter{1};
//    while(counter <= 50)
//    {
//        if(counter < 10)
//        {
//            std::cout << '0';
//        }
//        std::cout << counter << ' ';
//
//        if(counter % 10 == 0)
//        {
//            std::cout << '\n';
//        }
//
//
//        ++counter;
//    }
//    std::cout << '\n';
//
//    ------------------------------------
//
//    int outer{1};
//    while(outer <= 5)
//    {
//        int inner{1};
//        while(inner <= outer)
//        {
//            std::cout << inner++;
//        }
//
//    std::cout << '\n';
//   ++ outer;
//    }
//
//    std::cout << '\n';
//
//    ----------------------
//    int col{ 5 };
//    while(col >= 1)
//    {
//        int row{col};
//        while( row >= 1)
//        {
//            std::cout<< row-- <<' ';
//        }
//
//        std::cout << '\n';
//        --col;
//    }
//
//    std::cout << '\n';
//_________________________________________---------------

// loop from 1 to 5 rows
int i{ 1 };
while(i <= 5)
{

    //row elements in descending order 5-1
    int j{ 5 };

    while(j >= 1)
    {
        if( j <= i)
            std::cout << j <<' ';
       else
            std::cout << "* ";// extra space for formating
       --j;
    }
    //a row has been printed move to the next row
    std::cout <<'\n';
    ++i;
}





     return 0;
}
