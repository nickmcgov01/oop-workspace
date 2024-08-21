#pragma 1
#include<string>
#include<iostream>
class Clinic{
  Clinic();
  Clinic(std::string name, int max_size);
  int getNumber_of_cages();
  std::string getName();
  Cage* getCages();
    

}