//
// Created by honza on 09.12.2024.
//

#ifndef ARTILLERYENEMY_H
#define ARTILLERYENEMY_H

#include <iostream>

#include "Monster.h"

class ArtilleryEnemy : public Monster{

    char m_artilleryChar;

    public:

    ArtilleryEnemy();

    void attack() override;

    void deffence() override;

    char getArtilleryChar();
};



#endif //ARTILLERYENEMY_H
