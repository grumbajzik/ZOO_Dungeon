//
// Created by honza on 09.12.2024.
//

#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>

#include "../Map/Room.h"
#include "../Player/Archer.h"
#include "../Player/Player.h"
#include "../Player/Warrior.h"

enum class MonsterType {
    Artillery,CloseCombat
};

struct MonsterPosition {
    int x;
    int y;
};


class Monster {

protected:

    int m_health;
    int m_damage;
    int m_experience;
    MonsterPosition m_mosterPosition;

public:

    Monster(int health, int damage, int experience);

    virtual ~Monster() = default;

    virtual void makeMonsterInRoom(Room* room) = 0;

    virtual void attack(Player* player,Room* room) = 0;

    void defence(Archer* archer);

    void defence(Warrior* warrior);

    bool isMonsterAlive();

    int getHealth();

    int getDamage();

    int getExperience();

};



#endif //MONSTER_H
