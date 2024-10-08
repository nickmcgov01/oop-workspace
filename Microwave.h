#pragma once
#include "Machine.h"
class Microwave : public Machine {
    protected:
    double capacity;
    public:
        Microwave();
        Microwave(int powerUsage, double capacity); 
        void set_capacity(double capacity);
        double get_capacity();
        double getEnergyConsumption() override;
};