#include "Bus.h"

Bus::Bus(int ID) : Vehicle(ID) {}


time_t Bus::getParkingDuration() {
    int duration = static_cast<int>(std::difftime(std::time(nullptr), timeOfEntry));
    return static_cast<int>(duration * 0.75); // Apply 25% reduction
}
