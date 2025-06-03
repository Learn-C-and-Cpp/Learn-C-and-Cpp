/**Movie tracker: What movies have been watched, and how many times each movie has been watched.
 * use Movie and Movies classes
 */

#include <iostream>
#include "Movies.h" // can create objects from Movies.h

// Function prototypes
void add_Movie(Movies &movies_colletion, std::string name_val, std::string rating_val, int count_val);
void increment_watched(Movies &movie, std::string name_val);

// Helper function
void increment_watched(Movies &movies, std::string name_val)
{
  if (movies.increment_watched(name_val))
  {
    std::cout << name_val << "watch incremented" << std::endl;
  }
  else
  {
    std::cout << name_val << " Not found" << std::endl;
  }
}
// if movie is added, display added else movie already exist
void add_Movie(Movies &movies, std::string name_val, std::string rating_val, int count_val)
{
  if (movies.add_movie(name_val, rating_val, count_val))
  {
    std::cout << name_val << " movie added" << std::endl;
  }
  else
  {
    std::cout << name_val << " already exist" << std::endl;
  }
}

int main()
{
  // create movies collection
  Movies my_movies;

  // display movies
  my_movies.display();

  add_Movie(my_movies, "Big", "PG-13", 2);
  add_Movie(my_movies, "Star Wars", "PG", 5);
  add_Movie(my_movies, "Cinderella", "PG", 7);

  // display movies
  my_movies.display();

  add_Movie(my_movies, "Cinderella", "PG", 7);
  add_Movie(my_movies, "Ice Age", "PG", 12);  

  // display movies
  my_movies.display();

  increment_watched(my_movies, "Big");
  increment_watched(my_movies, "Ice Age");

  // display movies
  my_movies.display();
  increment_watched(my_movies, "XXX"); // Should not be found

  
  return 0;
}

void addMovie(Movies &movies_colletion, std::string name_val, std::string rating_val, int count_val)
{
  /**If a movie name exists, display an error message to the user
   * If the watch count increased for a non-existent movie name, display an error.
   **/
  // movies_colletion.addMovie();
  // movies_colletion.addMovie("","",0);
}
void incrementMovie(Movies &movie_increment, std::string name_val) {}
