#ifndef TRACTOR_H
#define TRACTOR_H

class Tractor {
public:
    static const double TRACTOR_PRICE;  // Fixed price for the tractor
    static const int REDUCE_HARVEST_DAYS;  // Amount of time the tractor reduces from the harvest

    Tractor();  
    void reduce_harvest(int& harvest_days);  // Function to reduce harvest days

private:
   
};

#endif // TRACTOR_H
