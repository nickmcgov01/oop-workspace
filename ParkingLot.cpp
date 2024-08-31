#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), currentCount(0) {}

int ParkingLot::getCount() {
    return currentCount;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (currentCount < maxCapacity) {
        vehicles.push_back(vehicle);
        currentCount++;
        std::cout << "Vehicle parked successfully." << std::endl;
    } else {
        std::cout << "The lot is full." << std::endl;
    }
}

void ParkingLot::unparkVehicle(int ID) {
    for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
        if ((*it)->getID() == ID) {
            delete *it;
            vehicles.erase(it);
            currentCount--;
            std::cout << "Vehicle removed from the lot." << std::endl;
            return;
        }
    }
    std::cout << "Vehicle not in the lot." << std::endl;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int count = 0;
    for (auto vehicle : vehicles) {
        if (vehicle->getParkingDuration() > maxParkingDuration) {
            count++;
        }
    }
    return count;
}

ParkingLot::~ParkingLot() {
    for (auto vehicle : vehicles) {
        delete vehicle;
    }
}
