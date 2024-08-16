// main-1-2.cpp

#include "Person.h"
#include <iostream>

PersonList createPersonList(int n);

int main() {
    // Test the createPersonList function with 3 persons
    int numPersons = 3;
    PersonList list = createPersonList(numPersons);
    
    delete[] list.people;

    return 0;
}
