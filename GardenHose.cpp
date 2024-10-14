 #include "GardenHose.h"

GardenHose::GardenHose(int speed_time, double price) : speed_time(speed_time), hose_price(price){};

void GardenHose::reduce_water(int& water_per_day){
    water_per_day -= speed_time;
    if (water_per_day < 1){
        water_per_day = 1;
    }

}