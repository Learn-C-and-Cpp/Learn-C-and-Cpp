
/*used in a for,switch,do,and while to terminate
 and avoid fall-through

*/

#include <iostream>

int breakOrReturn()
{
    while(true)
    {
        std::cout <<"Enter 'b' to break or 'r' to return:\n ";
         char ch{ };
         std::cin >>ch;
        //exit if input i 0
        if(ch == 'b')
        break; // execution will continue at the first statement beyond the loop

        if(ch == 'r')
        return 1;  //  // return will cause the function to immediately return to the caller (in this case, main())

    }

    // breaking the loop causes execution to resume here
    std::cout << "We broke out of the loop\n ";

    return 0;
}


int main()
{

int returnValue{breakOrReturn()};
std::cout << " Function  breakOrReturn returned " << returnValue << '\n';


    //allow the user to enter upto 10 numbers

            int sum{ 0 };
        //
        //           for(int counter{0}; counter < 10; ++counter)
        //          // while(true)
        //            {
        //                std::cout <<"Enter a number to add, or 0 to exit:\n";
        //                int num{ };
        //                std::cin >>num;
        //                //exit if input i 0
        //                if(num == 0)
        //                    break;
        //
        //                sum += num;
        //            }
        //            std::cout << "The sum  of all the numbers you entered is "<< sum << '\n';
            //std::cout << "We are out !!!\n";


// infinite loop


        //  while(true)
        //    {
        //        std::cout <<"Enter a number to add, or 0 to exit:\n";
        //        int num{ };
        //        std::cin >>num;
        //        //exit if input i 0
        //        if(num == 0)
        //            break;
        //
        //        sum += num;
        //    }
        //    //std::cout << "The sum  of all the numbers you entered is "<< sum << '\n';
        //    std::cout << "We are out !!!\n";



    //break vs return

for(int counter{0}; counter < 20; ++counter)
{
    if(())

}






    return 0;
}
