
#ifndef _CAR_H_
#define _CAR_H_

#include <string>

class Car {
 public:
  Car(const std::string& registration_number);  // create

  // setters
  void Drive(double distance);

  // getters
  const std::string& getRegistrationNumber()const;  // return the reference do not modify
  double getDistance() const;

 private:
  std::string registration_number_;
  double distance_;
};

#endif  // _CAR_H