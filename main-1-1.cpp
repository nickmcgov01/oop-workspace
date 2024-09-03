#include "Appliance.h"
#include <iostream>

int main() {
    Appliance p;

    std::cout << "Initial power rating: " << p.get_PowerRating() << std::endl;
    p.set_PowerRating(10);
    std::cout << "New power rating: " << p.get_PowerRating() << std::endl;

    std::cout << "Is the appliance initially on? " << (p.get_isOn() ? "Yes" : "No") << std::endl;

    p.turnOn();
    std::cout << "Is the appliance on now? " << (p.get_isOn() ? "Yes" : "No") << std::endl;

    p.turnOff();
    std::cout << "Is the appliance on now? " << (p.get_isOn() ? "Yes" : "No") << std::endl;

    return 0;
}
