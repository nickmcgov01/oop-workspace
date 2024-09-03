#pragma once
#include <vector>
#include "Appliance.h"

class House {
protected:
    std::vector<Appliance*> appliances;
    int numAppliances;

public:
    House();                            
    House(int numAppliances);           

    bool addAppliance(Appliance* appliance);   
    double getTotalPowerConsumption();         
    ~House();                                  
};
