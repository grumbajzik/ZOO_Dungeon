//
// Created by honza on 09.12.2024.
//

#ifndef TRAP_H
#define TRAP_H

#include "../Map/Room.h"
#include "../Player/Player.h"

struct TrapPosition {
    int x;
    int y;
};

class Trap {

    int m_damage;
    char m_symbol;
    TrapPosition m_trapPosition;
//    std::vector<std::pair<int, int>> position;

public:

    Trap();

    static Trap* createTrap();

    void makeTrapInRoom(Room *room);

    void treatPlayer(Player* player);
};



#endif //TRAP_H
