#ifndef CLINIC_H
#define CLINIC_H

#include "Cage.h"
#include <string>

class Clinic {
private:
    std::string name;
    int max_size;
    int current_size;
    Cage* cages; 
public:
  
    Clinic();

   
    Clinic(std::string clinicName, int maxSize);

   
    int getNumberOfCages();

    
    std::string getName();

   
    Cage* getCages();

   
    bool addCage(Cage newCage);

 
    ~Clinic();
};
#endif