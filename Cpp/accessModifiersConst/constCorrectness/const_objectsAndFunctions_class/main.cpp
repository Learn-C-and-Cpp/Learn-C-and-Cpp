#include <iostream>
#include "date.h"

int main() {

  Date noArgs; // no args called
  Date day1{2020, 10, 14};  // create object
  day1.print();

  const Date day2{2020, 10, 14};  // create const object
  day2.print();
  day2.doSomething(day2); // const member function
  
  Date* heap_date = new Date(2020, 10, 14); 
  Date* day3 = new Date(2024, 5, 31);
  

  std::cout << " ----- " << std::endl;
}
