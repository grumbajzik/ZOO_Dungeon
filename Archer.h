//
// Created by honza on 07.12.2024.
//

#ifndef ARCHER_H
#define ARCHER_H
#include "Player.h"


class Archer: public Player {

    int m_attackRange;
    PlayerPosition m_bulletPosition;

    public:

    Archer();

    void attack(Room* room,char input) override;

};



#endif //ARCHER_H
