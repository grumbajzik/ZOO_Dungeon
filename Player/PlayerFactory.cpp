//
// Created by honza on 12.12.2024.
//

#include "PlayerFactory.h"



Player *PlayerFactory::createPlayer(int index) {
    if (index == 1) {
        return new Archer();
    }
    if (index == 2) {
        return new Warrior();
    }
    return nullptr;
}

