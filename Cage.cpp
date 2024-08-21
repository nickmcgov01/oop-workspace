#include "Cage.h"
#include <string>

class Cage {
private:
    std::string name;
    int number;

public:
    
    Cage() : name(""), number(0) {}

    Cage(std::string newName, int newNumber) : name(newName), number(newNumber) {}

    std::string getName() {
        return name;
    }

    int getIDnum() {
        return number;
    }

    ~Cage() {}
};
