#pragma once
#include "Appliance.h"
class Fridge : public Appliance {
    protected:
    double volume;
    double powerConsumption;
    public:
    Fridge();
    Fridge(int powerRating, double volume);
    void setVolume(double volume);
    double getVolume();
    double getPowerConsumption();
};