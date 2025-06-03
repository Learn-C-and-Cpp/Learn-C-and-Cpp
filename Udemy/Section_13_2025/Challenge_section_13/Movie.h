// Movie header file  Models a movie

#ifndef _MOVIE_H
#define _MOVIE_H
#include <string>

class Movie
{
    // Attribuets
private:
    std::string name;
    std::string rating;
    int count;

    // Methods
public:
    // Setters
    void set_name(std::string name_val);
    void set_rating(std::string rating_val);
    void set_count(int count_val);
    // Getters
    std::string get_name() const;
    std::string get_rating() const;
    int get_count() const;

    // No-args Constructor
    Movie();
    // 3-args Constructor
    Movie(std::string name_val, std::string rating_val, int count_val);

    // Copy constructor is explicitly used
    Movie(const Movie &source); 

    // Move constructor is Not used : why how when?
   // Movie(Movie &&source) noexcept;

    // Destructor is Empty-not used, no raw pointers, heap allcation, why how when?
    ~Movie();

    // increment count ????
    void increment();    
    // display information
    void display() const;
};

#endif //_MOVIE_H