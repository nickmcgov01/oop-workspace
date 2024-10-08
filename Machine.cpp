#include "Machine.h"

Machine::Machine() : powerUsage(0), isRunning(false){};
Machine::Machine(int powerUsage) : powerUsage(powerUsage), isRunning(false){};
void Machine::set_powerUsage(int powerUsage){
    this->powerUsage = powerUsage;
}

int Machine::get_powerUsage(){
    return powerUsage;
}
void Machine::start(){
    isRunning = true;
}
void Machine::stop(){
    isRunning = false;
}

double Machine::getEnergyConsumption(){
    return 0;
}