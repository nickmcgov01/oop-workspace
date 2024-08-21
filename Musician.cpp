#include "Musician.h"

// Default constructor
Musician::Musician() {
    instrument = "null";
    experience = 0;
}

// Parameterized constructor
Musician::Musician(std::string instrument, int experience) {
    this->instrument = instrument;
    this->experience = experience;
}

// Method to get the instrument
std::string Musician::get_instrument() {
    return instrument;
}

// Method to get the years of experience
int Musician::get_experience() {
    return experience;
}

