#ifndef Truck_h
#define Truck_h

#include "Vehicle.h"

class Truck: public Vehicle
{
private:
    double towingCapacity;
    
public:
    double getTowingCapacity() const;
    void setTowingCapacity(double);
    void displayTruckInfo();
    
    Truck();
    ~Truck();
};

#endif
