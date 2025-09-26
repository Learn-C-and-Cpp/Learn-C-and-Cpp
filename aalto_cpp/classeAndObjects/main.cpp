#include <iostream>

#include "car.hpp"
#include "garage.hpp"

int main() {
  Car toyota("ABC-313");
  Car mazda("xxx-666");

  toyota.Drive(10.5);
  toyota.Drive(4.1);
  mazda.Drive(2.4);

  Garage garage;
  garage.DriveIn(toyota);
  garage.DriveIn(mazda);

  std::cout << toyota.getRegistrationNumber() << " has driven "
            << toyota.getDistance() << " km " << std::endl;

  std::cout << mazda.getRegistrationNumber() << " has driven "
            << mazda.getDistance() << " km " << std::endl;

  std::cout << "Cars in garage: " << std::endl;
  garage.PrintCars();
  return 0;
}