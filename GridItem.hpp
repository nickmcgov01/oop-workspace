#pragma once
#include <utility>
#include <iostream>


class GridItem {
    protected:
    static int gridItemCount;
    int itemCount;
    int width;
    int height;
    std::pair(int x, int y) (0, 0) coordinates;
    public:
        GridItem(int x, int y, int width , int height) 
        : coordinates(std::make_pair(x,y)), width(width), height(height){}
    GridItem();
    void setCoordinates(int x, int y){
        std::make_pair(x,y);
    }
    std::pair getCoordinates();

    int getGridWidth(){
        return width;
    }
    int getGridHeight(){
        return height;
    }

    int getActiveGridItemCount(){
        return itemCount;
    }

    virtual~ GridItem() = 0;

};