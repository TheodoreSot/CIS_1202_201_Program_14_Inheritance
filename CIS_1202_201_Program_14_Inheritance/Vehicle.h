#ifndef Vehicle_h
#define Vehicle_h

#include <string>
using namespace std;

class Vehicle
{
private:
    string ManufactName;
    int yearbuilt;
    
public:
    string getManfactName() const;
    int getYearBuilt() const;
    void setManfactName(string);
    void setYearBuilt(int);
    void displayVehicleInfo() const;
    
    Vehicle();
    ~Vehicle();
};

#endif
