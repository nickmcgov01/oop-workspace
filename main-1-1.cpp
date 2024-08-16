#include "Person.h"
#include <iostream>

PersonList createPersonList(int n);

int main() {
    // Create a PersonList with 3 persons
    PersonList list = createPersonList(3);
    for (int i = 0; i < list.numPeople; ++i) {
        std::cout << list.people[i].name << ", " << list.people[i].age << std::endl;
    }
    
    delete[] list.people;

    return 0;
}
