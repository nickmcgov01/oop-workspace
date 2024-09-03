#pragma once

#include "Appliance.h"
class TV : public Appliance {
    protected:
    double screenSize;
    double powerConsumption;
    public:
    TV();
    TV(int powerRating, double screenSize);
    void setScreenSize(double screenSize);
    double getScreenSize();
    double getPowerConsumption();
};