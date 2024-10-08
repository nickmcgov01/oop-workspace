#include "Factory.h"

// Default constructor initializing an empty factory with no machines
Factory::Factory() : numMachines(0) {}

// Parameterized constructor initializing the factory with a set number of machine slots
Factory::Factory(int numMachines) : numMachines(numMachines) {
    machines.reserve(numMachines);  // Reserve space to optimize performance when adding machines
}

// Adds a machine to the factory if there is space
bool Factory::addMachine(Machine* machine) {
    if (machines.size() < numMachines) {
        machines.push_back(machine);  // Add the machine pointer to the vector
        return true;
    }
    return false; // No space available
}

// Calculate total energy consumption by summing the consumption of each machine
double Factory::getTotalEnergyConsumption() {
    double totalConsumption = 0.0;
    for (Machine* machine : machines) {
        if (machine) { // Check if the pointer is valid
            totalConsumption += machine->getEnergyConsumption();
        }
    }
    return totalConsumption;
}

// Destructor to clean up dynamically allocated machines
Factory::~Factory() {
    for (Machine* machine : machines) {
        delete machine; // Ensure proper cleanup of dynamically allocated machines
    }
}
