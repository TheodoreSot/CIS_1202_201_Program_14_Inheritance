#ifndef Car_h
#define Car_h

#include "Vehicle.h"

class Car:public Vehicle
{
private:
    int numberOfDoors;
    
public:
    int getNumberOfDoors();
    void setNumberOfDoors();
    
    Car();
    ~Car();
    
};

#endif
