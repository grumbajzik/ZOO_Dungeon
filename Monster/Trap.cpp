//
// Created by honza on 09.12.2024.
//

#include "Trap.h"

#include <thread>

Trap::Trap() {
    m_damage = 20;
    m_symbol = '%';
    m_trapPosition = {-1,-1};
}

void Trap::makeTrapInRoom(Room *room) {
    unsigned int sizeX = room->getSizeOfRoomX();
    unsigned int sizeY = room->getSizeOfRoomY();
    bool isSign = true;

    m_trapPosition.x = std::rand() % sizeX; // Náhodný řádek
    m_trapPosition.y = std::rand() % sizeY;

    while (isSign) {
        if (room->getRoom().at(m_trapPosition.x).at(m_trapPosition.y) == " ") {
            isSign = false;
        } else {
            m_trapPosition.x = std::rand() % sizeX; // Náhodný řádek
            m_trapPosition.y = std::rand() % sizeY; // Náhodný sloupec
        }
    }
    room->drawTrap(m_trapPosition.x,m_trapPosition.y,m_symbol);
}

void Trap::treatPlayer(Player* player) {
    int healthAfterDmg = player->getHealth() - m_damage;
    if (player->getPositionX() == m_trapPosition.x && player->getPositionY() == m_trapPosition.y) {
        player->setHealth(healthAfterDmg);
    }
}



