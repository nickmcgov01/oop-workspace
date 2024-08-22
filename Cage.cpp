#include "Cage.h"


Cage::Cage() : name(""), number(0) {}

Cage::Cage(std::string newName, int newNumber){
    name = newName;
    number = newNumber;
}

std::string Cage::getName() {
    return name;
}


int Cage::getIDnum() {
    return number;
}

Cage::~Cage() {}
