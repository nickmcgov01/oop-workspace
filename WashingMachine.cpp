#include "WashingMachine.h"

// Default constructor
WashingMachine::WashingMachine() : Machine(0), drumSize(0) {}

// Parameterized constructor
WashingMachine::WashingMachine(int powerUsage, double drumSize) : Machine(powerUsage), drumSize(drumSize) {}

// Setter for drum size
void WashingMachine::set_drumSize(double drumSize) {
    this->drumSize = drumSize;
}

// Getter for drum size
double WashingMachine::get_drumSize() {
    return drumSize;
}


double  WashingMachine::getEnergyConsumption() {
    return powerUsage * 10 * (drumSize / 50);  // Implement the formula given in the question
}
