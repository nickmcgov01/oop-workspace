// function-1-3.cpp

#include "Person.h"

PersonList createPersonList(int n) {
    // Allocate memory for n Person structs
    Person* persons = new Person[n];

    // Initialize each Person struct with "Jane Doe" and age 1
    for (int i = 0; i < n; ++i) {
        persons[i].name = "Jane Doe";
        persons[i].age = 1;
    }

    // Create a PersonList struct and set its fields
    PersonList personList;
    personList.people = persons;
    personList.numPeople = n;

    // Return the PersonList struct
    return personList;
}

PersonList deepCopyPersonList(PersonList pl) {
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
