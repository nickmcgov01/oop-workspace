#include "Vehicle.h"
#include <vector>
#pragma once
class ParkingLot {
    private:
        int maxCapacity;
        std::vector<Vehicle*> vehicles;
        int currentCount;
    public:
        ParkingLot(int capacity);
        int parkVehicle(Vehicle* vehicle);
        int unparkVehicle(int ID);
        int getCount();
};