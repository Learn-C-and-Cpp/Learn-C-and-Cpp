// Movies header file - Models a collection of movie objects
// Movies(a collection of movie objects ) need to know about a movie(movie object). How? is by inlcuding (movie.h)

#ifndef _MOVIES_H
#define _MOVIES_H
#include <vector>
#include <string>
#include "Movie.h" // for movie object

class Movies
{
    // Attribuets
private:
    std::vector<Movie> movies_vector; // store movis objects

    // Methods
public:
    // No-args Constructor,  no raw pointer member attributs so default behaviour of cosntructors is ok
    Movies();
    // Coppy constructor
    // Movies(const Movies &source);
    // Move constructor
    // Movies(Movies &&source);
    // Destructor
    ~Movies();

    // Movies need three methods
    // movie object is created (based on add_Movie parameters )and added into the vector, return true if successful
    bool add_movie(std::string name_vale, std::string rating_val, int count_val); //<-----------------

    // increment watch count based on the movie name in the vector, returen false if movie don't exist
    bool increment_watched(std::string name_val); //<-----------------
    // Loop thruogh the vector and display all the movie objects
    void display() const; //<-----------------
};

#endif //_MOVIES_H