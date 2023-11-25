//#include <stdio.h>

#include "Vehicle.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string Vehicle::getManfactName() const
{
    return ManufactName;
}

int Vehicle::getYearBuilt() const
{
    return yearbuilt;
}

void Vehicle::displayVehicleInfo() const
{
    cout << "Vehicle Information: " << endl;
    cout << "Manufacturer: " << ManufactName << endl;
    cout << "Year built: " << yearbuilt << endl;
}

void Vehicle::setYearBuilt(int year)
{
    if(year>0)
    {
        yearbuilt=year;
    }
    
    else if(year<0)
    {
        do
        {
            cout << "Enter a positive number for the year built: ";
            cin >> year;
        }
        while(year<0);
        yearbuilt=year;
    }
}

void Vehicle::setManfactName(string name)
{
    ManufactName=name;
}

Vehicle::Vehicle()
{
    yearbuilt=0;
    ManufactName="";
}

Vehicle::~Vehicle()
{
    cout << "Vehicle Destructor ran" << endl;
}
