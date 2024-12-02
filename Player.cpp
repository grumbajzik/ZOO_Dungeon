//
// Created by honza on 29.11.2024.
//

#include "Player.h"

#include <regex>

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



void Player::Move(Room* room) {
    char input;
    input = _getch();

    switch (input) {
        case 'w':
            room->updateRoom(getPositionX(),getPositionY(), false);
            if (m_position.x > 1) {
                m_position.x -= 1;
                room->updateRoom(getPositionX(),getPositionY(), true);
            }else {
                room->updateRoom(getPositionX(),getPositionY(), true);
            }
            break;
        case 's':
            room->updateRoom(getPositionX(),getPositionY(), false);
            if ((room->getRoom().at(0).size() - 2) > m_position.x) {
                m_position.x += 1;
                room->updateRoom(getPositionX(),getPositionY(), true);
            }else {
                room->updateRoom(getPositionX(),getPositionY(), true);
            }
            break;
        case 'a':
            room->updateRoom(getPositionX(),getPositionY(), false);
            if (m_position.y > 1) {
                m_position.y -= 1;
                room->updateRoom(getPositionX(),getPositionY(), true);
            }else {
                room->updateRoom(getPositionX(),getPositionY(), true);
            }
            break;
        case 'd':
            room->updateRoom(getPositionX(),getPositionY(), false);
            if (room->getRoom().size() - 2 > m_position.y) {
                m_position.y += 1;
                room->updateRoom(getPositionX(),getPositionY(), true);
            }else {
                room->updateRoom(getPositionX(),getPositionY(), true);
            }
            break;
        default:
            break;
    }
}
int Player::s_level = 1;
