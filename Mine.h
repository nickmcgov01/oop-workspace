#include "GameEntity.h"
#include "Explosion.h"

#ifndef MINE_H
#define MINE_H

class Mine : public GameEntity {
public:
    Mine(int x, int y)
        : GameEntity(x, y, GameEntityType::MineType) {}

    Explosion explode() {
        entityType = GameEntityType::NoneType;
        return Explosion(std::get<0>(position), std::get<1>(position));
    }
};

#endif