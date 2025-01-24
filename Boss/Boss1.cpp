//
// Created by honza on 24.01.2025.
//

#include "Boss1.h"

#include <thread>

Boss1::Boss1() {
    m_health = 300;
    m_defense = 60;
    m_strength = 30;
    m_symbol = '1';
    position = {5,5};
}

void Boss1::makeBossInRoom(Room *room) {
    room->drawMonster(position.x,position.y,m_symbol);
}

void Boss1::attackOnDiagonal(Room *room) {
    int left = 4, right= 6;
    int up = 4, down = 6;
    int index = 5;
    while(index > 1){
        room->drawAttackFromBoss(up,left, true);
        room->drawAttackFromBoss(up,right, true);
        room->drawAttackFromBoss(down,left, true);
        room->drawAttackFromBoss(down, right, true);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        room->drawAttackFromBoss(up,left, false);
        room->drawAttackFromBoss(up,right, false);
        room->drawAttackFromBoss(down,left, false);
        room->drawAttackFromBoss(down, right, false);
        left--;
        right++;
        up--;
        down++;
        index--;
    }
}

void Boss1::attackOnHorizontally(Room *room) {
    int left = 4, right = 6;
    int up = 4, down = 6;
    int index = 5;
    while(index > 1) {
        room->drawAttackFromBoss(left,5,true);
        room->drawAttackFromBoss(right,5,true);
        room->drawAttackFromBoss(5,up,true);
        room->drawAttackFromBoss(5,down,true);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        room->drawAttackFromBoss(left,5,false);
        room->drawAttackFromBoss(right,5,false);
        room->drawAttackFromBoss(5,up,false);
        room->drawAttackFromBoss(5,down,false);
        index--;
        left--;
        right++;
        up--;
        down++;
    }
}

void Boss1::attackAroundBoss(Room *room) {
    //room->drawAttackFromBoss()
}


