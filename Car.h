#include "Vehicle.h"
#pragma once
class Car : public Vehicle {
public:
Car(int ID);
time_t getParkingDuration() override;
};