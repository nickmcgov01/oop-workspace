#pragma once
#include <utility>
#include <cmath>
#include "GridItem.hpp"
class Helper {
    int manhattanDistance(std::pair<int, int> item1, std::pair<int,int> item2){
        int x1 = item1.first, y1 = item1.second;
        int x2 = item2.first, y2 = item2.second;
        return std::sqrt(std::pow(x2-x1,2) + std::pow(y2-y1,2));
    }
};