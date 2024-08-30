#pragma once
#include <ctime>


class Vehicle {

protected:

    std::time_t timeOfEntry;
    
    int ID;

public:
    Vehicle(int ID);

    int getID() {}

    virtual time_t getParkingDuration() = 0; 

    virtual ~Vehicle() = default;
};




