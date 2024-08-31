// main-l1-2.cpp
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>

int main() {
    ParkingLot lot(10); // Create a parking lot with a capacity of 10

    // Park vehicles until the lot is full
    while (lot.getCount() < 10) {
        int type, ID;
        std::cout << "Enter type of vehicle (1 = Car, 2 = Bus, 3 = Motorbike): ";
        std::cin >> type;
        std::cout << "Enter the ID for the vehicle: ";
        std::cin >> ID;

        Vehicle* vehicle = nullptr;

        if (type == 1) {
            vehicle = new Car(ID); // Create a new Car object
        } else if (type == 2) {
            vehicle = new Bus(ID); // Create a new Bus object
        } else if (type == 3) {
            vehicle = new Motorbike(ID); // Create a new Motorbike object
        } else {
            std::cout << "Invalid vehicle type." << std::endl;
            continue;
        }

        lot.parkVehicle(vehicle); // Attempt to park the vehicle in the lot
    }

    // Unpark a vehicle based on user input
    int unparkID;
    std::cout << "Enter the ID of the vehicle you want to unpark: ";
    std::cin >> unparkID;
    lot.unparkVehicle(unparkID); // Attempt to remove the vehicle from the lot

    return 0;
}
