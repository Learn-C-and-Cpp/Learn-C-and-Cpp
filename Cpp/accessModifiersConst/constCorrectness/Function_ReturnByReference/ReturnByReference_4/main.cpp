/**Return by reference
 *
 */

#include <fstream> // read-write to files
#include <iostream>
#include <string>
#include <string_view>

void log_message(const std::string &message)
{
    static int count{0}; // static
    count++;

    std::ofstream myfile;
    myfile.open("log.txt", std::ios::app);
    if (myfile.is_open())
    {
        myfile <<"log " << count <<": "<< message << '\n';
        myfile.close();
    }
}

int main()
{
    log_message("read data");
    log_message("write data");
    log_message("data error");
   
    return 0;
}