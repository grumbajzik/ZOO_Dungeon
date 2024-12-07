//
// Created by honza on 07.12.2024.
//

#ifndef WARRIOR_H
#define WARRIOR_H
#include "Player.h"


class Warrior: public Player{

    PlayerPosition m_weaponPosition;

    public:

    Warrior();

    void attack(Room *room, char input) override;
};



#endif //WARRIOR_H
