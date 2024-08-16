 #include "Person.h"
 PersonList createPersonList(int n){
    Person* persons = new Person[n];
    for (int i = 0; i < n; i++){
        persons[i].name = "Jane Doe";
        persons[i].age = 1;
    }
    PersonList personList;
    personList.people = persons;
    personList.numPeople = n;
    return personList;
    }
