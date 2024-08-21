#include "Clinic.h"
#include "Cage.h"
#include <iostream>

int main() {
    Clinic clinic("Joes Vet", 3);

    Cage cage1("Lion Cage", 1);
 


    std::cout << (clinic.addCage(cage1) ? "Cage 1 added." : "Cage 1 not added.") << std::endl;
    
   
    Cage cage4("Giraffe Cage", 4);



    Cage* cages = clinic.getCages();
    for (int i = 0; i < clinic.getNumberOfCages(); ++i) {
        std::cout << "Cage " << i + 1 << ": " << cages[i].getName() << ", ID: " << cages[i].getIDnum() << std::endl;
    }

    return 0;
}
