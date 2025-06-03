// Movies cpp file
#include <iostream>
#include "Movies.h"

// No-args constuctor
Movies::Movies()
{
    std::cout << "Movise Constructor nothing to initialize " << std::endl;
}

Movies::~Movies()
{
    std::cout << "Movise destructor  nothing to destroy " << std::endl;
}

// Movie object is created (based on add_Movie parameters )and added into the vector, return true if successful
bool Movies::add_movie(std::string name_vale, std::string rating_val, int count_val)
{

    // Movie movie in range based for loop is a type of Movie class
    for (const Movie &movie : movies_vector)
    {
        if (movie.get_name() == name_vale)
            return false;
    }

    // Construct a movie object given name, rating, and count
    Movie temp{name_vale, rating_val, count_val};
    movies_vector.push_back(temp);
    return true;
}

// increment watch count based on the movie name in the vector, returen false if movie don't exist.
// use increment method in class Movie
bool Movies::increment_watched(std::string name_val)
{
    for (Movie &movie : movies_vector)
    {
        if (movie.get_name() == name_val)
        {
            movie.increment();
            return true;
        }
    }
    return false; // movie not found
}

void Movies::display() const
{
    if (movies_vector.size() == 0)
    {
        std::cout << "Sorry, no movies to display " << std::endl;
    }
    else
    {
        std::cout << "\n========================================= " << std::endl;
        for (const auto &movie : movies_vector)
        {
            movie.display();
        }
        std::cout << "\n========================================= " << std::endl;
    }
}