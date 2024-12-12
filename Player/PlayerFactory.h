//
// Created by honza on 12.12.2024.
//

#ifndef PLAYERFACTORY_H
#define PLAYERFACTORY_H
#include "Player.h"
#include "Archer.h"
#include "Warrior.h"

class PlayerFactory {

    public:

    static Player* createPlayer(int index);

};



#endif //PLAYERFACTORY_H
