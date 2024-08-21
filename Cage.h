// cage header file
#pragma once

#include <string>
#include <iostream>

class Cage {
    private:
        int number;
        std::string name;

    public:
        // Constructors
        Cage();  // Default constructor
        Cage(std::string newName, int newNumber);  // Parameterized constructor

        // Getter for name
        std::string getName(); 
        
        // Destructor
        ~Cage(); 
};  // Don't forget the semicolon here!
