#include <iostream>
#include <string>

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
    Vehicle vehicleTemp;
    Car carTemp;
    Truck truckTemp;
    string tempManuFactName;
    int tempYearBuilt;
    int tempDoorNumber;
    double tempTowingCap;
    
    
    cout << "Vehicle: " << endl;
    cout << "Enter the manufacturer: ";
    getline(cin,tempManuFactName);
    
    cout << "Enter the year built: ";
    cin >> tempYearBuilt;
    
    vehicleTemp.setYearBuilt(tempYearBuilt);
    vehicleTemp.setManfactName(tempManuFactName);
    vehicleTemp.displayVehicleInfo();
    cout << endl;
    
    cin.ignore();
    cout << "Car: " << endl;
    cout << "Enter the manufacturer: ";
    getline(cin,tempManuFactName);
    
    cout << "Enter the year built: ";
    cin >> tempYearBuilt;
    
    cout << "Enter the number of doors: ";
    cin >> tempDoorNumber;
    
    carTemp.setYearBuilt(tempYearBuilt);
    carTemp.setManfactName(tempManuFactName);
    carTemp.setNumberOfDoors(tempDoorNumber);
    carTemp.displayCarInfo();
    cout << endl;
    
    cin.ignore();
    cout << "Truck: " << endl;
    cout << "Enter the manufacturer: ";
    getline(cin,tempManuFactName);
    
    cout << "Enter the year built: ";
    cin >> tempYearBuilt;
    
    cout << "Enter the towing capacity: ";
    cin >> tempTowingCap;
    
    truckTemp.setYearBuilt(tempYearBuilt);
    truckTemp.setManfactName(tempManuFactName);
    truckTemp.setTowingCapacity(tempTowingCap);
    truckTemp.displayTruckInfo();
    cout << endl;
    
    return 0;
}
