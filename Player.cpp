//
// Created by honza on 29.11.2024.
//

#include "Player.h"

Player::Player(float health, float strength, float defence) {
    m_position = {3,3};
    m_expirience = 0;
    m_deffence = defence;
    m_health = health;
    m_strength = strength;
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

void Player::move(Room* room, unsigned char input) {
    room->updatePlayerPosition(m_position.x,m_position.y, false);
    switch (input) {
        case 'w':
            if (room->getRoom().at(m_position.x-1).at(m_position.y) == " ") {
                m_position.x -= 1;
            }
            break;
        case 's':
            if (room->getRoom().at(m_position.x+1).at(m_position.y) == " ") {
                m_position.x += 1;
            }
            break;
        case 'a':
            if (room->getRoom().at(m_position.x).at(m_position.y-1) == " ") {
                m_position.y -= 1;
             }
            break;
        case 'd':
            if (room->getRoom().at(m_position.x).at(m_position.y+1) == " ") {
                m_position.y += 1;
            }
            break;
        default:
            break;
    }
    room->updatePlayerPosition(m_position.x,m_position.y, true);
}

int Player::s_level = 1;
