#pragma 1
#include<string>
class Cage{
    private: 
    int number;
    std::string name;

    public:
    Cage();
    Cage(std::string newName, int newNumber);
    std::string getName(); 
    ~Cage(); 
}