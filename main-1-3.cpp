#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>

int main() {
    ParkingLot lot(10);

    for (int i = 0; i < 5; ++i) {
        int carID;
        std::cout << "Enter ID for Car " << i + 1 << ": ";
        std::cin >> carID;
        lot.parkVehicle(new Car(carID));
    }

    for (int i = 0; i < 3; ++i) {
        int busID;
        std::cout << "Enter ID for Bus " << i + 1 << ": ";
        std::cin >> busID;
        lot.parkVehicle(new Bus(busID));
    }

    for (int i = 0; i < 2; ++i) {
        int motorbikeID;
        std::cout << "Enter ID for Motorbike " << i + 1 << ": ";
        std::cin >> motorbikeID;
        lot.parkVehicle(new Motorbike(motorbikeID));
    }

    int overstayingVehicles = lot.countOverstayingVehicles(15);
    std::cout << "Number of vehicles that overstayed for more than 15 seconds: " << overstayingVehicles << std::endl;

    return 0;
}
