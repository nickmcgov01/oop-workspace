// Vehicle.cpp
#include "Vehicle.h"
#include <ctime>


Vehicle::Vehicle(int ID) : ID(ID) {
    timeOfEntry = std::time(nullptr); 
}


int Vehicle::getID() {
    return ID;
}



// Constructor for Motorbike class

