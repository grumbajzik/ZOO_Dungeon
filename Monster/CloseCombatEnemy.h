//
// Created by honza on 09.12.2024.
//

#ifndef CLOSECOMBATENEMY_H
#define CLOSECOMBATENEMY_H
#include "Monster.h"


class CloseCombatEnemy : public Monster{

    public:

    CloseCombatEnemy();

    void deffence() override;

    void attack() override;

};



#endif //CLOSECOMBATENEMY_H
