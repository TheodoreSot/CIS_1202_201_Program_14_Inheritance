#ifndef Vehicle_h
#define Vehicle_h

#include <string>

Class Vehicle
{
private:
    string ManufactName;
    int yearbuilt;
    
public:
    string getManfactName() const;
    int getYearBuilt() const;
    void setManfactName();
    void setYearBuilt();
    void displayInfo();
    
    Vehicle();
    ~Vehicle();
};

#endif
