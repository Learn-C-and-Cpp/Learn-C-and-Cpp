
#include <iostream>

int main()
{

    int counter{ 1 };

    while(counter <= 50)
    {
        if(counter < 10)
        {
            std::cout << '0';

        }

         std::cout << counter << ' ';

        if(counter % 10 == 0)
        {
          std::cout << '\n';
        }

        //std::cout << counter << " ";
        ++counter;
    }
    //std::cout << " done!";

    // nested loop

    int outer{ 1 };

    while( outer <= 5 )
    {
      //std::cout << outer;

      //loop between 1 and outer
    int inner{ 1 };

    while(inner <= outer)
    {
        std::cout << inner << ' ';
        ++inner;
    }
    std::cout << '\n';
      ++outer;
    }

    return 0;
}
