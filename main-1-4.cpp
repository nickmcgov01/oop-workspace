#include "Person.h"
#include <iostream>

PersonList createPersonList(int n);
PersonList shallowCopyPersonList(PersonList pl);

int main() {
    // Create an original PersonList with 3 persons
    PersonList originalList = createPersonList(3);

    // Create a shallow copy of the original list
    PersonList shallowCopy = shallowCopyPersonList(originalList);

    // Modify the shallow copy
    shallowCopy.people[1].name = "Shallow Copy Name";
    shallowCopy.people[1].age = 88;

    // Print both lists to check the output
    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < originalList.numPeople; ++i) {
        std::cout << "name: " << originalList.people[i].name << ", age: " << originalList.people[i].age << std::endl;
    }

    std::cout << "Shallow Copy List:" << std::endl;
    for (int i = 0; i < shallowCopy.numPeople; ++i) {
        std::cout << "name: " << shallowCopy.people[i].name << ", age: " << shallowCopy.people[i].age << std::endl;
    }

    // Cleanup
    delete[] originalList.people;

    return 0;
}
