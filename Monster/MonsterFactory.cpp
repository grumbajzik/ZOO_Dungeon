//
// Created by honza on 09.12.2024.
//

#include "MonsterFactory.h"

ArtilleryEnemy *MonsterFactory::createAritilleryMonster() {
    ArtilleryEnemy* artilleryEnemy = new ArtilleryEnemy();
    return artilleryEnemy;
}

CloseCombatEnemy *MonsterFactory::createCloseCombatMonster() {
    CloseCombatEnemy* closeCombatEnemy = new CloseCombatEnemy();
    return closeCombatEnemy;
}

