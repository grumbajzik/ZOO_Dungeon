//
// Created by honza on 29.11.2024.
//

#include "Player.h"

Player::Player() {
    m_position = {3,3};
    m_deffence = 5;
    m_health = 3;
    m_expirience = 0;
    m_strength = 10;
}

int Player::getPositionX() {
    return m_position.x;
}

int Player::getPositionY() {
    return m_position.y;
}


float Player::getDefence() {
    return m_deffence;
}

float Player::getHealth() {
    return m_health;
}

float Player::getStrength() {
    return m_strength;
}

void Player::Move() {
    char input;
    input = getch();

    switch (input) {
        case 'w':
            m_position.y += 1;
        case 's':
            m_position.y -= 1;
        case 'a':
            m_position.x -= 1;
        case 'd':
            m_position.x += 1;
    }
}
int Player::s_level = 1;
