
#pragma once
#include <utility>
#include <iostream>

class GridItem {
protected:
    static int gridItem;  
    int gridItemCount;   
    int gridWidth;
    int gridHeight;
    std::pair<int, int> coordinates; 

public:
    GridItem(int x, int y, int width, int height)
        : coordinates(std::make_pair(x, y)), gridWidth(width), gridHeight(height) {
        gridItem++;  
    }

    GridItem() : coordinates(std::make_pair(0, 0)), gridWidth(0), gridHeight(0) {
        gridItem++; 
    }

 
    void setCoordinates(int x, int y) {
        coordinates = std::make_pair(x, y);  // Update the coordinates
    }

    
    std::pair<int, int> getCoordinates() {
        return coordinates;
    }
    int getGridWidth() {
        return gridWidth;
    }

    int getGridHeight() {
        return gridHeight;
    }

    int getActiveGridItemCount() {
        return gridItem;
    }

    
    virtual void printItem() {
        std::cout << "Grid Item at (" << coordinates.first << ", " << coordinates.second << ")\n";
    }

  
    virtual ~GridItem() {
        gridItem--;  
    }
};


int GridItem::gridItem = 0;

