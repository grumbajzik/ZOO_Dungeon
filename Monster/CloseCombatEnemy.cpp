//
// Created by honza on 09.12.2024.
//

#include "CloseCombatEnemy.h"

CloseCombatEnemy::CloseCombatEnemy() : Monster(120,50,100) {
    m_CloseCombatChar = 'C';
}

void CloseCombatEnemy::makeMonsterInRoom(Room *room) {
    int roomSizeX = room->getSizeOfRoomX();
    int roomSizeY = room->getSizeOfRoomY();
    bool isSign = true;

    m_mosterPosition.x = std::rand() % roomSizeX;
    m_mosterPosition.y = std::rand() % roomSizeY;

    while (isSign) {
        if (room->getRoom().at(m_mosterPosition.x).at(m_mosterPosition.y) == " ") {
            isSign = false;
        } else {
            m_mosterPosition.x = std::rand() % roomSizeX; // Náhodný řádek
            m_mosterPosition.y = std::rand() % roomSizeY; // Náhodný sloupec
        }
    }
    room->drawMonster(m_mosterPosition.x,m_mosterPosition.y,m_CloseCombatChar);
}


char CloseCombatEnemy::getCloseCombatChar() {
    return m_CloseCombatChar;
}

void CloseCombatEnemy::attack() {

}

void CloseCombatEnemy::deffence() {

}


