

#include "person.h"

#include <iostream>

Person::Person() : firstName{"None"} {
  std::cout << "No args constructor " << std::endl;
}

Person::Person(std::string name) {
  firstName = name;

  std::cout << " one args constructor " << std::endl;
}

// Not a const member fucntion
void Person::setFirstName(std::string f_name) {
  // firstName = f_name;
  this->firstName = f_name;
}
std::string Person::getFirstName() const {
  return this->firstName;
}
// const member function
void Person::printPerson(const Person& person)  // can call any const function
{
  std::cout << person.getFirstName() << std::endl;
}