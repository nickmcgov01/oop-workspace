#include "Person.h"
#include <iostream>

Person* createPersonArray(int n);

int main() {
    // Create an array of 3 persons
    Person* persons = createPersonArray(3);
    for (int i = 0; i < 3; ++i) {
        std::cout << persons[i].name << ", " << persons[i].age << std::endl;
    }

    // Cleanup: Deallocate memory to avoid memory leaks
    delete[] persons;

    return 0;
}
