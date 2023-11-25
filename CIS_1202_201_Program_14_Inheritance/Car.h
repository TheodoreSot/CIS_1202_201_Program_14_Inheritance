#ifndef Car_h
#define Car_h

#include "Vehicle.h"

class Car:public Vehicle
{
private:
    int numberOfDoors;
    
public:
    int getNumberOfDoors() const;
    void setNumberOfDoors(int);
    void displayCarInfo();
    
    Car();
    ~Car();
    
};

#endif
