#include "Microwave.h"

Microwave::Microwave() : Machine(0), capacity(0){};

Microwave::Microwave(int powerUsage, double capacity) : Machine(powerUsage), capacity(capacity){};

void Microwave::set_capacity(double capacity){
    this->capacity = capacity;
}

double Microwave::get_capacity(){
    return capacity;
}

double Microwave::getEnergyConsumption(){
    return powerUsage * (capacity/20);
}