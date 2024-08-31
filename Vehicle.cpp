// Vehicle.cpp
#include "Vehicle.h"
#include <ctime>


Vehicle::Vehicle(int ID) : ID(ID) {
    timeOfEntry = std::time(nullptr) - 10000; 
}


int Vehicle::getID() {
    return ID;
}





