//Theodore Sotirelis
//CIS 1202 201
//November 26,2023

#include <iostream>
#include <string>

#include "Vehicle.h"    //vehicle parant class
#include "Car.h"        //car child class of vehicle
#include "Truck.h"      //truck child class of vehicle

using namespace std;

int main()
{
    //temporary variables for storage
    Vehicle vehicleTemp;
    Car carTemp;
    Truck truckTemp;
    string tempManuFactName;        //used for vehicle, car and truck
    int tempYearBuilt;              //used for vehicle,car and truck
    int tempDoorNumber;             //used for car
    double tempTowingCap;           //used for truck
    
    //gets vehicle info
    cout << "Vehicle: " << endl;
    cout << "Enter the manufacturer: ";
    getline(cin,tempManuFactName);
    
    cout << "Enter the year built: ";
    cin >> tempYearBuilt;
    
    //tests vehicle functions
    vehicleTemp.setYearBuilt(tempYearBuilt);
    vehicleTemp.setManfactName(tempManuFactName);
    vehicleTemp.displayVehicleInfo();
    cout << endl;
    
    //gets car info
    cin.ignore();
    cout << "Car: " << endl;
    cout << "Enter the manufacturer: ";
    getline(cin,tempManuFactName);
    
    cout << "Enter the year built: ";
    cin >> tempYearBuilt;
    
    cout << "Enter the number of doors: ";
    cin >> tempDoorNumber;
    
    //tests car functions
    carTemp.setYearBuilt(tempYearBuilt);
    carTemp.setManfactName(tempManuFactName);
    carTemp.setNumberOfDoors(tempDoorNumber);
    carTemp.displayCarInfo();
    cout << endl;
    
    //gets truck info
    cin.ignore();
    cout << "Truck: " << endl;
    cout << "Enter the manufacturer: ";
    getline(cin,tempManuFactName);
    
    cout << "Enter the year built: ";
    cin >> tempYearBuilt;
    
    cout << "Enter the towing capacity: ";
    cin >> tempTowingCap;
    
    //tests truck functions
    truckTemp.setYearBuilt(tempYearBuilt);
    truckTemp.setManfactName(tempManuFactName);
    truckTemp.setTowingCapacity(tempTowingCap);
    truckTemp.displayTruckInfo();
    cout << endl;
    
    return 0;
}
