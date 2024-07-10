#include "date.h"
#include <iostream>

Date::Date() : y{}, m{}, d{} {
  std::cout << "No args constructor " << std::endl;
}

Date::Date(int y_vale, int m_vale, int d_vale)
    : y{y_vale}, m{m_vale}, d{d_vale} {
  std::cout << "Three args Constructor " << std::endl;
}
Date::~Date() {
  std::cout << "Destructor " << std::endl;
}
void Date::print() const {  // const member
  std::cout << "Const member" << std::endl;
  std::cout << y << '/' << m << '/' << d << std::endl;
}
void Date::print() {  // non-const member
  std::cout << "Non-const member" << std::endl;
  std::cout << y << '/' << m << '/' << d << std::endl;
}

void Date::doSomething(const Date& date) const {
  date.print();
}
