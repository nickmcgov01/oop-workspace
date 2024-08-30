#include "Vehicle.h"
#include "Motorbike.h"

Motorbike::Motorbike(int ID) : Vehicle(ID) {}


time_t Motorbike::getParkingDuration() {
    int duration = static_cast<int>(std::difftime(std::time(nullptr), timeOfEntry));
    return static_cast<int>(duration * 0.85); // Apply 15% reduction
}