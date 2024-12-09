//
// Created by honza on 29.11.2024.
//

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <stdlib.h>

#include "../Map/Room.h"

struct PlayerPosition {
    int x;
    int y;
};

class Player {
protected:
    int m_health;
    float m_strength;
    float m_deffence;
    static int s_level;
    int m_expirience;
    PlayerPosition m_position;

public:

    Player(float health, float strength, float defence);

    void move(Room* room,unsigned char input);

    virtual void attack(Room* room,unsigned char input) = 0;

    bool isAlive();

    void setHealth(int health);

    int getPositionX();

    int getPositionY();

    float getHealth();

    float getStrength();

    float getDefence();

    void printInformation();

};


#endif //PLAYER_H
