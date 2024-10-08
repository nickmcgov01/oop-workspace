#pragma once
#include "Machine.h"
class WashingMachine : public Machine {
    protected:
        double drumSize;
    public:
        WashingMachine();
        WashingMachine(int powerUsage, double drumSize);
        void setDrumSize(double drumSize);
        double get_drumSize();
        void set_drumSize(double drumSize);
};