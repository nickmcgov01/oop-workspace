#include "Cage.h"

Cage(){
    name = ""
    number = 0;
}
Cage(std::string newName, int newNumber){
    name = newName;
    number = newNumber;
}
std::string getName(){
    return name;
}
int getIDnum(){
    return number;
}