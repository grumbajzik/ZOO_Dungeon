//
// Created by honza on 09.12.2024.
//

#ifndef CLOSECOMBATENEMY_H
#define CLOSECOMBATENEMY_H
#include "Monster.h"


class CloseCombatEnemy : public Monster{

    char m_CloseCombatChar;

    public:

    CloseCombatEnemy();

    void makeMonsterInRoom(Room *room) override;

    char getCloseCombatChar();

    void attack(Player* player, Room* room) override;

};



#endif //CLOSECOMBATENEMY_H
