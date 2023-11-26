#include "Truck.h"

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

double Truck::getTowingCapacity() const
{
    return towingCapacity;
}

void Truck::setTowingCapacity(double towingAblility)
{
    if(towingAblility>=0)       //makes sure towing capacity is positive
    {
        towingCapacity=towingAblility;
    }
    
    else if(towingAblility<0)   //makes sure towing capacity is at least 0 or more before assignement
    {
        do
        {
            cout << "Enter a positive number for towing capacity: ";
            cin >> towingAblility;
        }
        while(towingAblility<0);
    }
}

Truck::Truck()
{
    towingCapacity=0;
}

Truck::~Truck()
{
    cout << "Truck Destructor Ran" << endl;
}

void Truck:: displayInfo()
{
    Vehicle::displayInfo();
    cout << "Towing capacity: " << towingCapacity << endl;
}
