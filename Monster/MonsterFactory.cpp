//
// Created by honza on 09.12.2024.
//

#include "MonsterFactory.h"

Monster *MonsterFactory::createMonster(MonsterType monsterType) {
    switch (monsterType) {
        case MonsterType::Artillery:
            return new ArtilleryEnemy();
            break;
        case MonsterType::CloseCombat:
            return new CloseCombatEnemy();
            break;
        default:
            return nullptr;
            break;
    }
}

