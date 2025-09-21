
#ifndef _CAR_H
#define _CAR_H

#include<string>

class Car
{
    public:
    Car(const std::string registration_number); // create
   
    //setters
    void Drive(double distance);
    
    // getters 
    const std::string& getRegistration() const; // return the reference do not modify
    double getDistance() const; 
    
    private:
        std::string registration_number_;
        double distance_;
}


#endif // _CAR_H