
/*
    * using typedefs ( typedef )
*/


#include <iostream>

#include <cstdint>



//using namespace std;
void print(int num)
{
    using namespace std;
    using std::cout;
    cout << " using namespace std; num = " << num <<'\n';
}

using employees = int; // employees  is an alias to int

employees numberOfPeople() // numberOfPeople function returns the number of employees
{
     using std::cout;
     using std::cin;

     employees num{};
     cout << "Enter the number of employees "<<'\n';
     cin>>num;

     return num;

}


int main()
{

    using std::cout; //  cout should resolve to std::cout
    using std::endl;

    cout << "typedef "<<'\n';

    /*

        * defines distance_t as an alias to double ( _t means aliased type )
        * typedef double distance_t
        * prefer -> using double distance_t

    */
    typedef double distance_t;


    distance_t km{ 12.5 };
    cout << "Kilometers = "<< km <<'\n';

    // better way
    using distance_t = double;

    using digit_t = int;
    cout << "Digit = "<< digit_t{5} <<'\n';

    // aliases makes it clear what the return type value means
    using testScore_t = int; //aliasing
    testScore_t greadeTest(); // usage the function returns a type respresenting testScores

    // call to the pring to show the mumber of people

    print(numberOfPeople());

   // cout << people <<'\n';

   //using cstdint to print alias int = int8_t

   std::int8_t i{97};
   std::cout << "using cstdint to print alias int = int8_t = " << i <<'\n';

//   // ----------------- Important -------------------------------------


//
//   // Using typedef to make complex types simple in advaced c++
//
//   // std::vector<std::pair<std::string, int >> pairlist; this is complex therefore use type alias:
//
//
//    using pairlist_t = std::vector<  std::pair<std::string, int >   > ; // make pairlist_t a type for grazy type
//
//    pairlist_t pairlist; // instantiate a pairlist_t variable
//
//    bool hasDuplicates ( pairlist_t pairlist )
//    {
//        //some code here
//
//
//    }



    return 0;
}
