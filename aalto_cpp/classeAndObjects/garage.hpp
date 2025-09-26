#ifndef _GARAGE_H_
#define _GARAGE_H_

#include "car.hpp" // include car.hpp
#include <vector>  // store cars

class Garage {
 public:
  Garage() {} // constructor
  void DriveIn(Car& car);
  void PrintCars();
  
 private:
 std::vector<Car> cars_;
};

#endif //_GARAGE_H_
