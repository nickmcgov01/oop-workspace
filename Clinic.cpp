#include "Clinic.h"
#include "Cage.h"
#include <iostream>


Clinic::Clinic() : name(""), max_size(0), current_size(0), cages(nullptr) {}

Clinic::Clinic(std::string clinicName, int maxSize){
    name = clinicName;
    max_size = maxSize;
    cages = new Cage[max_size];
}


int Clinic::getNumberOfCages(){
    return current_size;
}

std::string Clinic::getName(){
    return name;
}


Cage* Clinic::getCages(){
    return cages;
}


bool Clinic::addCage(Cage newCage) {
    if (current_size < max_size) {
        cages[current_size++] = newCage;
        return true;
    }
    return false;
}

Clinic::~Clinic() {
    delete[] cages;
}
