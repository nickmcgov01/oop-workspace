#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>
#include <ctime>
#include <vector>

int main() {
    std::vector<Car> cars;
    std::vector<Bus> buses;
    std::vector<Motorbike> motorbikes;
    int numVehicles;
    std::cout << "Enter the number of vehicles: ";
    std::cin >> numVehicles;

    for (int i = 0; i < numVehicles; ++i) {
        int type, ID;
        std::cout << "Enter type (1 = Car, 2 = Bus, 3 = Motorbike) and ID: ";
        std::cin >> type >> ID;

        if (type == 1) {
            cars.emplace_back(ID); // Create a new Car object
        } else if (type == 2) {
            buses.emplace_back(ID); // Create a new Bus object
        } else if (type == 3) {
            motorbikes.emplace_back(ID); // Create a new Motorbike object
        } else {
            std::cout << "Invalid type entered!" << std::endl;
        }
    }

    // Calculate parking duration for each Car
    for (const auto& car : cars) {
        std::cout << "Car ID: " << car.getID()  // Correctly accessing member function
                  << ", Parking Duration: " << car.getParkingDuration() << " seconds." << std::endl;
    }

    // Calculate parking duration for each Bus
    for (const auto& bus : buses) {
        std::cout << "Bus ID: " << bus.getID() // Correctly accessing member function
                  << ", Parking Duration: " << bus.getParkingDuration() << " seconds." << std::endl;
    }

    // Calculate parking duration for each Motorbike
    for (const auto& motorbike : motorbikes) {
        std::cout << "Motorbike ID: " << motorbike.getID() // Correctly accessing member function
                  << ", Parking Duration: " << motorbike.getParkingDuration() << " seconds." << std::endl;
    }

    return 0;
}


