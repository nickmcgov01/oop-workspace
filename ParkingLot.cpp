#include "ParkingLot.h"
ParkingLot::ParkingLot(int capacity) :maxCapacity(capacity){
    currentCount = 0;
};

int getCount(){
    return currentCount;
}

