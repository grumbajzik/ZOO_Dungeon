//
// Created by honza on 12.12.2024.
//

#include "PlayerFactory.h"



Player *PlayerFactory::createPlayer(int index) {
    if (index == 0) {
        return new Archer();
    }
    if (index == 1) {
        return new Warrior();
    }
    return nullptr;
}

