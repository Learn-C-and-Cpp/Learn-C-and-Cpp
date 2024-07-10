/**Return by reference
 *
 */

#include <fstream> // read-write to files
#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::fstream myFile;
    myFile.open("logData.txt",std::ios::out); // write
    if(myFile.is_open())
    {
        myFile <<"read data\n";
        myFile <<"write data\n";
        myFile.close();
    }

    myFile.open("logData.txt",std::ios::app);// append
    if(myFile.is_open())
    {
        myFile <<"data error\n";
        myFile.close();
    }

    // std::cout << "getMessage" << '\n';

    return 0;
}