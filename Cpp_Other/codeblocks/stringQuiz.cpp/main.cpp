

/* ask for the full name
 * ask for age
 * print users age/number of chars in their name including white spaces
*/

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter you full name " << std::endl;
    std::string fullName{ };
    std::getline(std::cin, fullName);

    std::cout << "Enter you age " << std::endl;
    int age{};
    std::cin >>age;


    int letters{ static_cast<int>(fullName.length())};
    double agePerLetter{static_cast<double>(age)/letters};



    std::cout << "you have lived " << agePerLetter << "  years for each letter in your name\n";

    return 0;
}




