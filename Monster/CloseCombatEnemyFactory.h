//
// Created by honza on 09.12.2024.
//

#ifndef CLOSECOMBATENEMYFACTORY_H
#define CLOSECOMBATENEMYFACTORY_H
#include "CloseCombatEnemy.h"
#include "MonsterFactory.h"


class CloseCombatEnemyFactory : public MonsterFactory{

    public:

    CloseCombatEnemy* createMonster() override;

};



#endif //CLOSECOMBATENEMYFACTORY_H
