#include "Vehicle.h"

class Motorbike : public Vehicle {
public:
    Motorbike(int ID);
    time_t getParkingDuration() override;

};
