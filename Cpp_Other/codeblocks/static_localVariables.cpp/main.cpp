/*
    static keyward meaning
     * an I dentifier exists from time of creation and destroyed at when a programe ends
     * gives a global identifier an internal linkage ( an identifiere can be used only in the
     file it is defined )
     * local variable are automatic ( Using the static keyword on a local variable changes
     its duration from automatic duration to static duration hence retaining it's
     value)
     * used for generating unique identification (e.g objectsxx)


*/


#include <iostream>

void incrementAndPrint()
{
    int value{ 1 };//automatic duration by default
    ++value;
    std::cout << value << std::endl;
}//value is destroyed here


void incrementAndShow()
{
    /*
        * static duration via static keyword

    */
    static int s_value{ 1 };// this initializer is executed only once
    ++s_value;
    std::cout << s_value << std::endl;
}/* s_value is destroyed here but becomes
    inaccessible because it goes out of scope
*/

int generatID()
{
    static int s_itemID{ 0 };
    /* makes a copy of s_itemID, increments real s_ID,then return the value in the copy */
    return s_itemID++;
}

int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
    std::cout << '\n';

    // static
    incrementAndShow();
    incrementAndShow();
    incrementAndShow();

    //generate Id
    std::cout << generatID() << '\n';
    std::cout << generatID() << '\n';
    std::cout << generatID() << '\n';
    std::cout << generatID() << '\n';



    return 0;
}
