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
    } else {
        std::cout << "The lot is full" << std::endl; // Removed extra period to match expected output
    }
}

void ParkingLot::unparkVehicle(int ID) {
    for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
        if ((*it)->getID() == ID) {
            delete *it;
            vehicles.erase(it);
            currentCount--;
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl; // Removed extra period to match expected output
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
