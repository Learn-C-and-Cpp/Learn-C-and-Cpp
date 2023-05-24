
#include <iostream>
#include <cstring> // for c-style functions
#include <cctype>  // for character-based functions

int main()
{
    // char firs_name[20]{};
    //char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    // std::cout <<"Please enter your first name" << std::endl;
    // std::cin >> firs_name;

    // std::cout <<"Please enter your last name" << std::endl;
    // std::cin >> last_name;

    // std::cout <<"---------------------------" << std::endl; //
    // std::cout <<"Hello, " <<firs_name<< " Your first name has " <<strlen(firs_name) << " characters" << std::endl;
    // std::cout <<"and your last name, " <<last_name<< " has " <<strlen(last_name) << " characters" << std::endl;

    // strcpy(full_name, firs_name); // copy first_name to full_name
    // strcat(full_name, " "); // concatenate full_name and a space
    // strcat(full_name, last_name); // concatnate last_name to full_name
    // std::cout << "your full name is " << full_name <<std::endl;

    // std::cout <<"---------------------------" << std::endl; //
    // std::cout <<"Enter your full name" << std::endl; //
    // std::cin >> full_name;
    // std::cout <<"Your name is "<< full_name << std::endl; //

    std::cout << "------get till maximum -----------" << std::endl; // ctype
    std::cout << "Enter your full name" << std::endl;               //
    std::cin.getline(full_name, 50);
    std::cout << "Your name is " << full_name << std::endl; //

    std::cout << "------Compare---------------" << std::endl; // ctype
    strcpy(temp, full_name);
    if (strcmp(temp, full_name) == 0)
    {
        std::cout << temp << " and " << full_name << " are the same" << std::endl;
    }
    else
    {
        std::cout << temp << " and " << full_name << " are different" << std::endl;
    }

    std::cout << "-------toupper--------------" << std::endl; // ctype
    for(size_t i{0}; i < strlen(full_name); ++i)
    {
        if(isalpha(full_name[i]))
        {
            full_name[i] = toupper(full_name[i]);
        }
    }
     std::cout << "Your full name is " << full_name << std::endl;

    std::cout << "------Compare again-------------" << std::endl; // ctype
    if (strcmp(temp, full_name) == 0)
    {
        std::cout << temp << " and " << full_name << " are the same" << std::endl;
    }
    else
    { 
        std::cout << temp << " and " << full_name << " are different" << std::endl;
    }

    std::cout <<"---------------------------" << std::endl; //
    std::cout <<"Results of comparing " << temp << " and " <<full_name << ": " << strcmp(temp, full_name)<< std::endl;
    std::cout <<"Results of comparing " <<full_name<< "and " <<temp << " : " << strcmp(full_name, temp)<< std::endl;


    return 0;
}