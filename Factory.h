#pragma once
#include "Machine.h"
#include <vector>

class Factory {
protected:
    std::vector<Machine*> machines;  // Vector to store pointers to Machine objects
    int numMachines;  // Maximum number of machines the factory can hold

public:
    Factory();                   // Default constructor
    Factory(int numMachines);    // Parameterized constructor with max machine slots

    bool addMachine(Machine* machine);  // Adds a Machine pointer to the factory
    double getTotalEnergyConsumption(); // Calculates total energy consumption
    ~Factory();                         // Destructor to clean up allocated memory
};
