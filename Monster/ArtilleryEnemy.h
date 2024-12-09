//
// Created by honza on 09.12.2024.
//

#ifndef ARTILLERYENEMY_H
#define ARTILLERYENEMY_H

#include <iostream>

#include "Monster.h"

class ArtilleryEnemy : public Monster{

    public:

    ArtilleryEnemy();

    void attack() override;

    void deffence() override;
};



#endif //ARTILLERYENEMY_H
