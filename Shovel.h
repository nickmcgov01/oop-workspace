#ifndef SHOVEL_H
#define SHOVEL_H

#include "FarmingEquipment.h"
class Shovel : public Farming_Equipment {
public:
    int speed_time;
    double shovel_price;

    Shovel(int speed_time, double price);

    virtual void reduce_build(int& build_time);
};
#endif