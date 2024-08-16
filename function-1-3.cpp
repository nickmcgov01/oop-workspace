#include "Person.h"

PersonList deepCopyPersonList(PersonList pl){
    PersonList newPersonList;
    
    // Allocate memory for a new array of Person structs
    newPersonList.people = new Person[pl.numPeople];
    
    // Set the number of people in the new PersonList
    newPersonList.numPeople = pl.numPeople;
    
    // Copy each Person struct from the original PersonList to the new one
    for (int i = 0; i < pl.numPeople; ++i) {
        newPersonList.people[i].name = pl.people[i].name;
        newPersonList.people[i].age = pl.people[i].age;
    }
    
    // Return the new PersonList struct
    return newPersonList;

}