#include <tuple>

#ifndef GAMEENTITY_H
#define GAMEENTITY_H

class GameEntity {
public:
    // Public enum so that it can be accessed externally
    enum GameEntityType {
        ExplosionType,
        MineType,
        NoneType,
        ShipType
    };

protected:
    std::tuple<int, int> position;
    GameEntityType entityType;  

public:
   
    GameEntity(int x, int y, GameEntityType type)
        : position(std::make_tuple(x, y)), entityType(type) {}

    std::tuple<int, int> getPos() {
        return position;
    }

    GameEntityType getType() {
        return entityType;
    }
};

#endif
