#pragma once

class Machine {
protected:
    int powerUsage;   // Protected access to allow derived classes to access directly
    bool isRunning;

public:
    Machine();
    Machine(int powerUsage);

    void start();
    void stop();
    int get_powerUsage();             // Getter for powerUsage
    void set_powerUsage(int powerUsage);  // Setter for powerUsage
    virtual double getEnergyConsumption();
};
