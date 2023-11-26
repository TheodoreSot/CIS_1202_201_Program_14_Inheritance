#include "Car.h"

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int Car::getNumberOfDoors() const
{
    return numberOfDoors;
}

void Car::setNumberOfDoors(int doorNumber)
{
    //checks if number of doors is positive.
    if(doorNumber>=0)
    {
        numberOfDoors=doorNumber;
    }
    
    //makes sure the number of doors is positive
    else if(doorNumber<1)
    {
        do
        {
            cout << "Please enter the number of doors on your car: ";
            cin >> doorNumber;
        }
        while(doorNumber<1);
    }
}

Car::Car()
{
    numberOfDoors=0;
}

Car::~Car()
{
    cout << "Car destructor is running" << endl;
}

void Car::displayInfo()
{
    Vehicle::displayInfo();       //calls vehicle display info
    cout << "Doors: " << numberOfDoors << endl;
}
