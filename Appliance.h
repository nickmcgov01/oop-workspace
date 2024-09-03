#pragma once
#include "iostream"

class Appliance {
    protected:  
        int powerRating;
        bool isOn;
    public:
        bool get_isOn();
        Appliance();
        Appliance(int powerRating);
        void turnOn();
        void turnOff();
        int get_powerRating();
        void set_powerRating(int rating);
        virtual double getPowerConsumption();
};

