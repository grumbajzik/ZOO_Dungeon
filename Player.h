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
protected:
    float m_health;
    float m_strength;
    float m_deffence;
    static int s_level;
    int m_expirience;
    PlayerPosition m_position;

public:

    Player(float health, float strength, float defence);

    void move(Room* room,char input);

    virtual void attack(Room* room,char input) = 0;

    int getPositionX();

    int getPositionY();

    float getHealth();

    float getStrength();

    float getDefence();

};


#endif //PLAYER_H
