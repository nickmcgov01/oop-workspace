#include "House.h"
#include "Fridge.h"
#include "TV.h"
#include <iostream>

int main() {
    // Create a House object with space for 3 appliances
    House myHouse(3);

    // Create some appliances (Fridge and TV objects)
    Appliance* fridge1 = new Fridge(100, 200);  // Fridge with power rating 100 and volume 200
    Appliance* tv1 = new TV(150, 50);           // TV with power rating 150 and screen size 50
    Appliance* fridge2 = new Fridge(200, 300);  // Another fridge with different specs

    // Add appliances to the House
    if (myHouse.addAppliance(fridge1)) {
        std::cout << "Fridge 1 added successfully." << std::endl;
    } else {
        std::cout << "Failed to add Fridge 1." << std::endl;
    }

    if (myHouse.addAppliance(tv1)) {
        std::cout << "TV added successfully." << std::endl;
    } else {
        std::cout << "Failed to add TV." << std::endl;
    }

    if (myHouse.addAppliance(fridge2)) {
        std::cout << "Fridge 2 added successfully." << std::endl;
    } else {
        std::cout << "Failed to add Fridge 2." << std::endl;
    }

    // Display the total power consumption of all appliances in the House
    std::cout << "Total Power Consumption: " << myHouse.getTotalPowerConsumption() << " kW/h" << std::endl;

    return 0;
}
