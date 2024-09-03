#pragma once
#include "iostream"

class Appliance {
    protected:  
        int powerRating;
        bool isOn;
    public:
        bool get_isOn();
        Appliance();
        void turnOn();
        void turnOff();
        int get_PowerRating();
        void set_PowerRating(int rating);
        virtual double getPowerConsumption();
};

