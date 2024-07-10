// Print and clear guest list

#include <iostream>
#include <string>
#include <typeinfo>

std::string print_guest_list(const std::string guest_list[], size_t guest_list_size);
void clear_guest_list(std::string guest_list[], size_t guest_list_size);
void event_guest_list();

int main()
{

    // print_guest_list(guest_list, guest_list_size);
    //  const std::string &stooge
    event_guest_list();

    return 0;
};

std::string print_guest_list(const std::string guest_list[], size_t guest_list_size)
{
    for (size_t i{0}; i < guest_list_size; ++i)
    {
        std::cout << guest_list[i] << std::endl;
    }

    return typeid(guest_list).name();
}
void clear_guest_list(std::string guest_list[], size_t guest_list_size)
{

    for (size_t i{0}; i < guest_list_size; ++i)
    {
        guest_list[i] = " ";
    }
    std::cout << std::endl;
}

void event_guest_list()
{
    std::string guest_list[]{"Larry", "Moe", "Curly"};
    size_t guest_list_size{3};

    print_guest_list(guest_list, guest_list_size);

    clear_guest_list(guest_list, guest_list_size);

    print_guest_list(guest_list, guest_list_size);
}
