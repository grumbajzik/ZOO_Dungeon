//
// Created by honza on 09.12.2024.
//

#ifndef MONSTERFACTORY_H
#define MONSTERFACTORY_H
#include "ArtilleryEnemy.h"
#include "CloseCombatEnemy.h"



class MonsterFactory {

    std::vector<Monster*> m_monsters;

public:

    Monster* createMonster(MonsterType monsterType);

};



#endif //MONSTERFACTORY_H
