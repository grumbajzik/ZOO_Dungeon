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

int Player::getWeaponPositionX() {
    return m_weaponPosition.x;
}

int Player::getWeaponPositionY() {
    return m_weaponPosition.y;
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



void Player::move(Room* room, char input) {
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

void Player::attack(Room *room, char input) {
    int arrow = static_cast<int>(input);
    m_weaponPosition.x = m_position.x;
    m_weaponPosition.y = m_position.y;
    std::cout << m_weaponPosition.x << " " << m_weaponPosition.y << std::endl;
    room->drawPlayerAttack(m_weaponPosition.x,m_weaponPosition.y, false);


    switch (arrow) {
        case 72:
            std::cout << "sipka nahoru"<<std::endl;
            m_weaponPosition.x -= 1;
            std::cout << m_weaponPosition.x << " " << m_weaponPosition.y << std::endl;
            break;
        case 80:
            std::cout << "sipka dolu"<<std::endl;
            m_weaponPosition.x += 1;
            std::cout << m_weaponPosition.x << " " << m_weaponPosition.y << std::endl;
            break;
        case 75:
            std::cout << "sipka doleva"<<std::endl;
            m_weaponPosition.y -= 1;
            std::cout << m_weaponPosition.x << " " << m_weaponPosition.y << std::endl;
            break;
        case 77:
            std::cout << "sipka doprava"<<std::endl;
            m_weaponPosition.y += 1;
            std::cout << m_weaponPosition.x << " " << m_weaponPosition.y << std::endl;
            break;
        default:
            room->drawPlayerAttack(m_weaponPosition.x,m_weaponPosition.y, false);
            break;
    }
    room->drawPlayerAttack(m_weaponPosition.x,m_weaponPosition.y, true);

}



int Player::s_level = 1;
