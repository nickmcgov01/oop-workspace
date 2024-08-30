#include "Vehicle.h"
#pragma once
class Bus : public Vehicle {
public:
    Bus(int ID);
    time_t getParkingDuration() override;

};