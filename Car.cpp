#include "Car.h"
Car::Car(int ID) : Vehicle(ID) {}


time_t Car::getParkingDuration() {
    int duration = static_cast<int>(std::difftime(std::time(nullptr), timeOfEntry));
    return static_cast<int>(duration * 0.9); // Apply 10% reduction
}

