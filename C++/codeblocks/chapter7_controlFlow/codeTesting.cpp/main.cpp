#include <iostream>

// function testing
bool isLoverVowel(char c)
{
    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true; //returns 1
        default:
            return false;//returns 0
    }
}
// for future use
// return  the tests that failed, or all tests passed
int testVowel()
{
    // validating test

    if( isLoverVowel('a') != true ) return 1;
    if( isLoverVowel('q') != false ) return 2;


//    std::cout << isLoverVowel('a'); // should produce 1
//    std::cout << isLoverVowel('q'); // should produce 0
//    std::cout << isLoverVowel('u'); // should produce 0
}

int main()
{
    testVowel();

    return 0;
}
