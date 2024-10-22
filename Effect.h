#include "GameEntity.h"

#ifndef EFFECT_H
#define EFFECT_H
class Effect {
    public:
        virtual void apply(GameEntity& entity) = 0;
        virtual ~Effect() {}



};
#endif