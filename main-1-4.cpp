#include "Person.h"
#include <iostream>

PersonList createPersonList(int n);
PersonList shallowCopyPersonList(PersonList pl);

int main() {
    
    PersonList originalList = createPersonList(3);
    
    
    PersonList shallowCopy = shallowCopyPersonList(originalList);
    
    // Modify the shallow copy
    shallowCopy.people[1].name = "Shallow Copy Name";
    shallowCopy.people[1].age = 88;
    
    

    delete[] originalList.people;


    return 0;
}
