/*using struct to track things
 * this struct cantains plain old structs (POD) that is all members are variables
 *
 */

#include <iostream>
#include <limits> // for std::numeric_limits

// function to clear std::cin buffer using std::numeric_limits
void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

}

// declare an Addvetising struct
struct Addvertising
{
   int addShown{ };
   double addClickedPecentage{ };
   double averageEarningsPerClick{ };
};

// declare getAddvetising  functing to read in data
Addvertising getAddvertising()
{
    //to ensure the right input if extracted use loop -validate input
    //int input{ };
    while(true)
        {
        Addvertising temp{  }; // save inputs in adds
        std::cout << "Enter number of addShown to users "<<'\n';
        std::cin >> temp.addShown;
        std::cout << "Enter the percentage of adds Clicked  "<<'\n';
        std::cin >> temp.addClickedPecentage;
        std::cout << "percentage earnings per click " <<'\n';
        std::cin >> temp.averageEarningsPerClick;


         // case fail: if the previous  extraction failed
        if(std::cin.fail())
        {
             std::cin.clear(); // reset input stream buffer
             ignoreLine(); //remove the bad input

        }
        else
        {
            ignoreLine();

             return temp; // return multible variable

        }


    }

}

// print out the data
 void printAddvertisin(Addvertising add )
 {
   std::cout << " number of adds shown: "  << add.addShown <<'\n';
   std::cout << " Clicked Pecentage: "  << add.addClickedPecentage <<'\n';
   std::cout << " avarage Earnings Per Click: € "  << add.averageEarningsPerClick <<'\n';

   //averageEarningsPerClick/100
   std::cout << "Total earnings:  € " << (add.addShown * add.addClickedPecentage/100 *  add.averageEarningsPerClick) <<'\n';

 }


int main()
{
    Addvertising adds{2,5,0.4 };

    printAddvertisin(  getAddvertising() );
    //getAddvertising();

     return 0;
}
