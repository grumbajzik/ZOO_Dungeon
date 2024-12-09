//
// Created by honza on 09.12.2024.
//

#ifndef ATRILLERYENEMYFACTORY_H
#define ATRILLERYENEMYFACTORY_H
#include "ArtilleryEnemy.h"
#include "MonsterFactory.h"


class AtrilleryEnemyFactory : MonsterFactory{

public:

    ArtilleryEnemy* createMonster() override;

};



#endif //ATRILLERYENEMYFACTORY_H
