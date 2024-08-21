#include "Cage.h"
#include <string>
Cage(){
    name = ""
    number = 0;
}
Cage::Cage(std::string newName, int newNumber){
    name = newName;
    number = newNumber;
}
std::string getName(){
    return name;
}
int getIDnum(){
    return number;
}