// cage header file
#pragma once
#include <string>
#include <iostream>

class Cage {
    private:
        int number;
        std::string name;

    public:
      
        Cage();  
        Cage(std::string newName, int newNumber);  // Parameterized constructor

        
        std::string getName(); 
        
       
        ~Cage(); 
};  