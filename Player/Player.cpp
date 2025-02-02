//
// Created by honza on 29.11.2024.
//

#include <thread>
#include "Player.h"

Player::Player(float health, float strength, float defence) {
    m_position = {3,3};
    m_deffence = defence;
    m_health = health;
    m_strength = strength;
    m_playerSkin = '*';
}

void Player::setHealth(int health) {
    m_health = health;
}

void Player::setPlayerSkin(char skin) {
    m_playerSkin = skin;
}

char Player::getPlayerSkin() {
    return m_playerSkin;
}

bool Player::isAlive() {
    return m_health > 0;
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
//    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    room->updatePlayerPosition(m_position.x,m_position.y, false);

    switch (input) {
        case 'w':
            if(m_position.x > 1) {
                m_position.x -= 1;
            }
            break;
        case 's':
            if(m_position.x < room->getSizeOfRoomX()-2){
                m_position.x += 1;
            }
            break;
        case 'a':
            if(m_position.y > 1) {
                m_position.y -= 1;
            }
            break;
        case 'd':
            if(m_position.y < room->getSizeOfRoomY()-2){
                m_position.y += 1;
            }
            break;
        default:
            break;
    }
    room->updatePlayerPosition(m_position.x,m_position.y, true);
}

void Player::printInformation() {
    std::cout << "Heakth: " << m_health << std::endl;
    std::cout << "Strength: " << m_strength << std::endl;
    std::cout << "Defence: " << m_deffence << std::endl;
    std::cout << "Position X: " << m_position.x << "Position Y: " << m_position.y << std::endl;


}

