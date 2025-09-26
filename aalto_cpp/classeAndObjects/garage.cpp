#include <iostream>
#include "garage.hpp"

void Garage::DriveIn(Car& car) {
  cars_.push_back(car);  // add to vector

}

//std::vector<Car>::size_type is a type definition associated with the class
void Garage::PrintCars() {
  std::vector<Car>::size_type i; // unsigned int type
  for (i = 0; i < cars_.size(); i++) {
    std::cout << cars_[i].getRegistrationNumber() << " ("
              << cars_[i].getDistance() << " km)" << std::endl;
  }
}