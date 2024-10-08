#include "Machine.h"
#include "iostream"

int main(void){
    Machine nick;
    std::cout << "Power Usage Initially: " << nick.get_powerUsage() << std::endl;
    nick.set_powerUsage(99);
    std::cout <<"Power usage now: " << nick.get_powerUsage() << std::endl;



    return 0;
}