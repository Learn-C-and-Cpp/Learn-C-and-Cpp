// print the guest list to un event then clear after
#include <iostream>
#include <string>
#include <typeinfo>

std::string print_guest_list(const std::string &guest_1, const std::string &guest_2, const std::string &guest_3);
void clear_guest_list(std::string &guest_1, std::string &guest_2, std::string &guest_3);
void event_guest_list();

int main()
{
    event_guest_list();
    return 0;
}

std::string print_guest_list(const std::string &guest_1, const std::string &guest_2, const std::string &guest_3) // checked
{
    std::cout << guest_1 << std::endl;
    std::cout << guest_2 << std::endl;
    std::cout << guest_3 << std::endl;

    // return guest_1 + guest_2 + guest_3;

    std::string test_1 = typeid(guest_1).name(), test_2 = typeid(guest_2).name(), test_3 = typeid(guest_3).name();
    return test_1 + test_2 + test_3;
}
void clear_guest_list(std::string &guest_1, std::string &guest_2, std::string &guest_3) // checked
{
    guest_1 = " ";
    guest_2 = " ";
    guest_3 = " ";
}

void event_guest_list() // checked
{

    std::string guest_1{"Larry"};
    std::string guest_2{"Moe"};
    std::string guest_3{"Curly"};

    print_guest_list(guest_1, guest_2, guest_3);
    clear_guest_list(guest_1, guest_2, guest_3);
    print_guest_list(guest_1, guest_2, guest_3);
}
