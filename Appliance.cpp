#include "Appliance.h"

Appliance::Appliance() : powerRating(0), isOn(false){};
Appliance::Appliance(int powerRating) : powerRating(powerRating), isOn(false) {}
void Appliance::turnOn(){
    isOn = true;
}
void Appliance::turnOff(){
    isOn = false;
}
double Appliance::getPowerConsumption(){
    return 0;
}

void Appliance::set_powerRating(int rating){
    powerRating = rating;
}
int Appliance::get_powerRating(){
    return powerRating;
}
bool Appliance::get_isOn(){
    return isOn;
}


