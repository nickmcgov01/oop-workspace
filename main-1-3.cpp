#include "Person.h"
#include <iostream>

PersonList createPersonList(int n);
PersonList deepCopyPersonList(PersonList pl);

int main() {
    // Create an original PersonList with 3 persons
    PersonList originalList = createPersonList(3);
    
    // Create a deep copy of the original list
    PersonList deepCopy = deepCopyPersonList(originalList);
    
    // Modify the deep copy
    deepCopy.people[0].name = "Deep Copy Name";
    deepCopy.people[0].age = 99;

    // Cleanup: Deallocate memory
    delete[] originalList.people;
    delete[] deepCopy.people;

    return 0;
}
