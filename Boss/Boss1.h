//
// Created by honza on 24.01.2025.
//

#ifndef BOSS1_H
#define BOSS1_H
#include "Boss.h"


class Boss1 : public Boss{

    BossPosition position;

    public:

    Boss1();

    void makeBossInRoom(Room *room) override;

    void attackInDiagonal(Room *room);



};



#endif //BOSS1_H
