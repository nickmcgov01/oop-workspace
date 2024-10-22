#include <iostream>
#include <tuple>
#ifndef GAMEENTITY_H
#define GAMEENTITY_H

class GameEntity {
    public:
enum GameEntityType {
    ExplosionType,
    MineType,
    NoneType,
    ShipType,
};
private:
    std::tuple<int,int> position;
    GameEntityType type;
public:
    GameEntity(int x, int y, GameEntityType type) {
        position = std::make_tuple(x,y);
        switch(type) {
            case 
        }
    }
    std::tuple<int, int> getPos(){
        return position;
    }
    GameEntityType getType(){
        return type;
    }
};
#endif