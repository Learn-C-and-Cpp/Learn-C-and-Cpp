
// quizz
#include <iostream>
#include <string>

int main()
{
    // Exercise 1
    std::cout << "Formatting ----------- " << std::endl;
    std::string unformatted_full_name{"StephenHawking"};

    std::string first_name = unformatted_full_name.substr(0, 7);
    std::cout << "first_name " << first_name << std::endl;
    std::string last_name = unformatted_full_name.substr(7, 13);
    std::cout << "last_name " << last_name << std::endl;
    std::string formatted_full_name{};
    formatted_full_name = first_name + last_name;

    // basic_string& insert(size_type index, size_type count, CharT ch );
    formatted_full_name.insert(7, 1, ' ');

    std::cout << "formatted_full_name " << formatted_full_name << std::endl;
    std::cout << std::endl;

    // Exercise 2: format and sort journal entries based on the authors last name
    std::cout << "Digital library ----------- " << std::endl;
    /*  In this exercise you will create a program that will be used in
    a digital library to format and sort journal entries based on
    the authors last name. Each entry has room to store only the last name of the author.
    */
    std::string journal_entry_1{"Isaac Newton"};
    std::string journal_entry_2{"Leibniz"};

    journal_entry_1.erase(0, 6);

    // size_t ans = (journal_entry_2 < journal_entry_1) ? 1 : 0;

    if (journal_entry_2 < journal_entry_1)
    {
        journal_entry_2.swap(journal_entry_1);
    }
    else
    {
        if (journal_entry_1 < journal_entry_2)
        journal_entry_1.swap(journal_entry_2);
    }

    std::cout << journal_entry_1 << "\n"
              << journal_entry_2 << std::endl;
    ;
}