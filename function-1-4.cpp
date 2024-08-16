#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    // Create a new PersonList struct
    PersonList newPersonList;
    
    // Copy the people pointer (shallow copy, points to the same array)
    newPersonList.people = pl.people;
    
    // Copy the number of people
    newPersonList.numPeople = pl.numPeople;
    
    // Return the shallow copy of PersonList
    return newPersonList;
}
// Add this to either function-1-4.cpp or a separate file that gets compiled together


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

