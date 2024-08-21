#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
private:
    std::string instrument;
    int experience;

public:
    // Default constructor
    Musician() : instrument("null"), experience(0) {}

    // Parameterized constructor
    Musician(std::string instrument, int experience) : instrument(instrument), experience(experience) {}

    // Method to get the instrument
    std::string get_instrument() {
        return instrument;
    }

    // Method to get the years of experience
    int get_experience() {
        return experience;
    }
};

#endif
