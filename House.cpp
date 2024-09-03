#include "House.h"

// Default constructor initializing an empty house
House::House() : numAppliances(0) {}

// Parameterized constructor initializing with a set number of appliance slots
House::House(int numAppliances) : numAppliances(numAppliances) {
    appliances.reserve(numAppliances);  // Reserve space in the vector to optimize performance
}

// Adds an appliance to the house if there is space
bool House::addAppliance(Appliance* appliance) {
    if (appliances.size() < numAppliances) {
        appliances.push_back(appliance); // Add the appliance pointer to the vector
        return true;
    }
    return false; // No space available
}

// Calculate total power consumption by summing the consumption of each appliance
double House::getTotalPowerConsumption() {
    double totalConsumption = 0.0;
    for (Appliance* appliance : appliances) {
        if (appliance) { // Check if the pointer is valid
            totalConsumption += appliance->getPowerConsumption();
        }
    }
    return totalConsumption;
}

// Destructor to clean up dynamically allocated appliances
House::~House() {
    for (Appliance* appliance : appliances) {
        delete appliance; // Ensure proper cleanup of dynamically allocated appliances
    }
}
