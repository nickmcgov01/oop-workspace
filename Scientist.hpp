#include "GridItem.hpp"
#pragma once

class Scientist : public GridItem {
    protected: 
    int experimentCount;

    public:
    Scientist(int gridWidth, int GridHeight) :
    width(0), height(0) {}
    int getExperimentCount(){
        return experimentCount;
    }
    void runExperiment(){
        experimentCount++;
    }

    bool move(int xOffset, int yOffset){
        if (xOffset <= 2 && xOffset >= -2 && yOffset <= 2 && yOffset >= -2){
            coordinates.first += xOffset;
            coordinates.second += yOffset;
            return true;
        }
        else {
            return false;
        }
    }


};