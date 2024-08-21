// cage header file
#ifndef CAGE_H
#define CAGE_H
#include <string>
#include <iostream>

class Cage {
    private:
        int number;
        std::string name;

    public:
      
        Cage();  
        Cage(std::string newName, int newNumber);  

        std::string getName(); 
        int getIDnum();
        
        ~Cage(); 
};  
#endif