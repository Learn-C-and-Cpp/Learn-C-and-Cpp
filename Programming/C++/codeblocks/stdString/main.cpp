
/*strng is included in std library
 */

#include <iostream>
#include <string> // to bring in the declarations of std::string and std::getling

#include <limits> // Ignore unlimited characters




int main()
{
    // using botn std::cin and std:getline() may couse unexpected behaviour
    std::cout << " pick 1 or 2 n";
    int choice{ };
    std::cin >> choice;

    // 32767 is the largest signed value guaranteed to fit in a (2-byte) integer on all platforms.

    std::cin.ignore(32767, '\n'); // ignore upto 32767 characters untill a \n is removed
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // correct


    std::cout<<"Now enter you full name "<<'\n';
    std::string name{ };
    std::getline(std::cin, name); //read full line of text into name

    std::cout<<"Hello, "<< name <<" your choice is "<< choice<<'\n';

    //string lenght
    std::cout << name << "has :  " << name.length() << "characters\n";





//    std::cout<<"Enter age"<<'\n';
//    std::string age{};
//    std::getline(std::cin, age); // read  a full line of text into age
//    std::cout<<"my name is "<< name<<" my age is "<< age<<'\n';

//    unsigned short x{65535}; //largest 16-bit unsined value possible
//    std::cout<< "x was :" << x << '\n';
//
//    x = 65536;
//    std::cout<< "x was :" << x << '\n';
//
//    unsigned  int range{4294967295}; //largest 16-bit unsined value possible
//    std::cout<< "range  was :" << range << '\n';
//
//    x = 4294967295 +1;
//    std::cout<< "x was :" << x << '\n';
//
//    x = 4294967295 +2;
//    std::cout<< "x was :" << x << '\n'; // out of range
//




    return 0;
}
