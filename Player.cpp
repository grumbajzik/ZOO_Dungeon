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
    m_attackRange = 4;
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

int Player::getAttackRange() {
    return m_attackRange;
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

//utok na blizko
void Player::attack(Room *room, char input) {
    int arrow = static_cast<int>(input);
    m_weaponPosition.x = m_position.x;
    m_weaponPosition.y = m_position.y;
    room->drawPlayerAttack(m_weaponPosition.x,m_weaponPosition.y, false);

    switch (arrow) {
        case 72:
            //sipka nahoru
            m_weaponPosition.x -= 1;
            break;
        case 80:
            //sipka dolu
            m_weaponPosition.x += 1;
            break;
        case 75:
            //sipka doleva
            m_weaponPosition.y -= 1;
            break;
        case 77:
            //sipka doprava
            m_weaponPosition.y += 1;
            break;
        default:
            room->drawPlayerAttack(m_weaponPosition.x,m_weaponPosition.y, false);
            break;
    }
    room->drawPlayerAttack(m_weaponPosition.x,m_weaponPosition.y, true);
}

void Player::attackOnDistance(Room *room, char input) {
    int arrow = static_cast<int>(input);
    int direction = -1;
    m_bulletPosition.x = m_position.x;
    m_bulletPosition.y = m_position.y;
    room->drawPlayerAttackOnRange(m_attackRange,m_bulletPosition.x,m_bulletPosition.y,direction, false);

    switch (arrow) {
        case 72:
            m_bulletPosition.x--;
            direction = 1; //up
            room->drawPlayerAttackOnRange(m_attackRange,m_bulletPosition.x,m_bulletPosition.y,direction, true);
            break;
        case 80:
            m_bulletPosition.x++;
            direction = 2; //down
            room->drawPlayerAttackOnRange(m_attackRange,m_bulletPosition.x,m_bulletPosition.y,direction, true);
            break;
        case 75:
            m_bulletPosition.y--;
            direction = 3; //left
            room->drawPlayerAttackOnRange(m_attackRange,m_bulletPosition.x,m_bulletPosition.y,direction, true);
            break;
        case 77:
            m_bulletPosition.y++;
            direction = 4; //right
            room->drawPlayerAttackOnRange(m_attackRange,m_bulletPosition.x,m_bulletPosition.y,direction, true);
            break;
        default:
            room->drawPlayerAttackOnRange(m_attackRange,m_bulletPosition.x,m_bulletPosition.y,direction, false);
            break;
    }

}



int Player::s_level = 1;
