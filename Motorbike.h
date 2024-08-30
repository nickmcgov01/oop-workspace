#include "Vehicle.h"
#pragma once


class Motorbike : public Vehicle {
public:
    Motorbike(int ID);
    time_t getParkingDuration() override;

};
