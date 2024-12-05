//
// Created by honza on 29.11.2024.
//

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <stdlib.h>

#include "Room.h"

struct PlayerPosition {
    int x;
    int y;
};

class Player {
    float m_health;
    float m_strength;
    float m_deffence;
    static int s_level;
    int m_expirience;
    PlayerPosition m_position;
    PlayerPosition m_weaponPosition;


public:

    Player();

    void move(Room* room,char input);

    void attack(Room* room,char input);

    int getPositionX();
    int getPositionY();

    int getWeaponPositionX();
    int getWeaponPositionY();

    float getHealth();

    float getStrength();

    float getDefence();


};


#endif //PLAYER_H
