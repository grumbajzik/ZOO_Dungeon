//
// Created by honza on 09.12.2024.
//

#ifndef MONSTERFACTORY_H
#define MONSTERFACTORY_H
#include "ArtilleryEnemy.h"
#include "CloseCombatEnemy.h"


//abstrakni tovarna
class MonsterFactory {

public:

    CloseCombatEnemy* createCloseCombatMonster();

    ArtilleryEnemy* createAritilleryMonster();



};



#endif //MONSTERFACTORY_H
