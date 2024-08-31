// main.cpp
#include "Vehicle.h"     // Include the base class header
#include "Car.h"         // Include the derived class Car header
#include "Bus.h"         // Include the derived class Bus header
#include "Motorbike.h"   // Include the derived c
#include <iostream>      // For standard input/output
#include <vector>        // For using the vector container
#include <ctime>         

int main() {
    int numCars, numBuses, numMotorbikes;

    // Get the number of each type of vehicle from the user
    std::cout << "Enter the number of cars: ";
    std::cin >> numCars;
    std::cout << "Enter the number of buses: ";
    std::cin >> numBuses;
    std::cout << "Enter the number of motorbikes: ";
    std::cin >> numMotorbikes;

    // Calculate the total number of vehicles
    int numVehicles = numCars + numBuses + numMotorbikes;

    // Vector to hold pointers to Vehicle objects
    std::vector<Vehicle*> vehicles;

    // Add Car objects to the vector
    for (int i = 0; i < numCars; ++i) {
        int carID;
        std::cout << "Enter ID for Car " << i + 1 << ": ";
        std::cin >> carID;
        vehicles.push_back(new Car(carID)); // Dynamically create a Car and store its pointer
    }

    // Add Bus objects to the vector
    for (int i = 0; i < numBuses; ++i) {
        int busID;
        std::cout << "Enter ID for Bus " << i + 1 << ": ";
        std::cin >> busID;
        vehicles.push_back(new Bus(busID)); // Dynamically create a Bus and store its pointer
    }

    // Add Motorbike objects to the vector
    for (int i = 0; i < numMotorbikes; ++i) {
        int motorbikeID;
        std::cout << "Enter ID for Motorbike " << i + 1 << ": ";
        std::cin >> motorbikeID;
        vehicles.push_back(new Motorbike(motorbikeID)); // Dynamically create a Motorbike and store its pointer
    }

    // Display the parking duration for each vehicle using polymorphism
    for (auto vehicle : vehicles) {
        std::cout << "Vehicle ID: " << vehicle->getID() 
                  << ", Parking Duration: " << vehicle->getParkingDuration() << " seconds." << std::endl;
    }

    // Free the allocated memory for each vehicle to avoid memory leaks
    for (auto vehicle : vehicles) {
        delete vehicle; // Properly delete each dynamically allocated object
    }

    return 0;
}



