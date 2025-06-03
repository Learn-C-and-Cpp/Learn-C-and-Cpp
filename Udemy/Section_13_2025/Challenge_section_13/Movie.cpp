// Movie Cpp file

#include <iostream>
#include "Movie.h"

// Default constructor
// Movie::Movie()
//     : Movie{"name", "rate", 0}
// {
//     std::cout << "Default constructor " << std::endl;
// }

// Constructor - list initialized
Movie::Movie(std::string name_val, std::string rating_val, int count_val)
    : name{name_val}, rating{rating_val}, count{count_val}
{
    std::cout << "Constructor " << std::endl;
}
// Copy constructor is explicitly implemented, the compiler can procid by default
Movie::Movie(const Movie &source) 
    :Movie{source.name, source.rating, source.count}    
{
    std::cout << "Copy constructor " << std::endl;
}

// Destructor
Movie::~Movie()
{
    std::cout << "Destructor " << std::endl;
}

// Setters and Getters with const-correctness
void Movie::set_name(std::string name_val) { name = name_val; } // use this keyword if member variables names are/is the same as the local variable name in a member function
std::string Movie::get_name() const { return name; }

void Movie::set_rating(std::string rating_val) { rating = rating_val; }
std::string Movie::get_rating() const { return rating; }

void Movie::set_count(int count_val) { count = count_val; }
int Movie::get_count() const { return count; }

// increment count
void Movie::increment()
{
    ++count;
}
// display information
void Movie::display() const
{
    std::cout << name << ", " << rating <<", " << count <<std::endl;
}
