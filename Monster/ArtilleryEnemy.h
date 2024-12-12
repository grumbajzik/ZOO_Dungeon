//
// Created by honza on 09.12.2024.
//

#ifndef ARTILLERYENEMY_H
#define ARTILLERYENEMY_H

#include <iostream>

#include "Monster.h"

class ArtilleryEnemy : public Monster{

    char m_artilleryChar;

    MonsterPosition m_artilleryAttackPos;

    public:

    ArtilleryEnemy();

    void makeMonsterInRoom(Room *room) override;

    void attack(Player* player, Room* room) override;

    char getArtilleryChar();
};



#endif //ARTILLERYENEMY_H
