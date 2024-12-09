//
// Created by honza on 09.12.2024.
//

#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>

class Monster {

protected:

    int m_health;
    int m_damage;
    int m_experience;

public:

    Monster(int health, int damage, int experience);

    virtual ~Monster() = default;

    virtual void attack() = 0;

    virtual void deffence() = 0;

    bool isMonsterAlive();

    int getHealth();

    int getDamage();

    int getExperience();

};



#endif //MONSTER_H
