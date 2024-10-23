#include "GridItem.hpp"
#pragma once

class Scientist : public GridItem {
    protected: 
    int experimentCount;

    public:
    Scientist();
    Scientist(int gridWidth, int GridHeight): 
    GridItem(width, height){}

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