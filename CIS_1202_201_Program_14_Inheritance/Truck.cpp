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
    if(towingAblility>=0)
    {
        towingCapacity=towingAblility;
    }
    
    else if(towingAblility<0)
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

void Truck:: displayTruckInfo()
{
    displayVehicleInfo();
    cout << "Towing capacity: " << towingCapacity << endl;
}
