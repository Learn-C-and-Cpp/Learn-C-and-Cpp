#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
 private:
  std::string firstName;  // State of the class - changing it is changing the
                          // state of the object.

 public:
  Person();
  Person(std::string person);
  void setFirstName(std::string firstName);  // setter modifies the state

  /** Const will not modify the internal state of the object // Read only
   * method can't modify class It can be use in constant objects
   */
  std::string getFirstName() const;
  void printPerson(const Person& person);

  // const int* const value;
  // const int *const getValue() const { return value; }
};

#endif