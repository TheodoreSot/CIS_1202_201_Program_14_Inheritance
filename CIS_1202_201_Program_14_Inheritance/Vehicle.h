#ifndef Vehicle_h
#define Vehicle_h

#include <string>
using namespace std;

class Vehicle
{
protected:
    string ManufactName;
    int yearbuilt;
    
public:
    string getManfactName() const;
    int getYearBuilt() const;
    void setManfactName(string);
    void setYearBuilt(int);
    void displayInfo() const;
    
    Vehicle();
    ~Vehicle();
};

#endif
