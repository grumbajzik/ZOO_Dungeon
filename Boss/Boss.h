//
// Created by honza on 24.01.2025.
//

#ifndef BOSS_H
#define BOSS_H
#include "../Map/Room.h"

struct BossPosition {
    int x;
    int y;
};

class Boss {

protected:
    char m_symbol;
    int m_health;
    int m_strength;
    int m_defense;

    public:

    Boss();

    static Boss* createBoss(int boss);

    virtual void makeBossInRoom(Room* room) = 0;


};



#endif //BOSS_H
