#pragma once
#include <vector>
#include "Vehicle.h"

class ParkingLot {
private:
    int maxCapacity;
    std::vector<Vehicle*> vehicles;
    int currentCount;

public:
    ParkingLot(int capacity);
    int getCount();
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int ID);
    int countOverstayingVehicles(int maxParkingDuration);
    ~ParkingLot();
};
