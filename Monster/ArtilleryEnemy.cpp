//
// Created by honza on 09.12.2024.
//

#include "ArtilleryEnemy.h"

#include <thread>

ArtilleryEnemy::ArtilleryEnemy(): Monster(100, 20, 100) {
    m_artilleryChar = 'A';
}

void ArtilleryEnemy::makeMonsterInRoom(Room *room) {
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
    room->drawMonster(m_mosterPosition.x,m_mosterPosition.y,m_artilleryChar);
}



char ArtilleryEnemy::getArtilleryChar() {
    return m_artilleryChar;
}

void ArtilleryEnemy::attack(Player* player,Room* room) {
    int roomSizeX = room->getSizeOfRoomX()-1;
    int roomSizeY = room->getSizeOfRoomY()-1;
    int healthAfterDmg = player->getHealth()-m_damage;

    m_artilleryAttackPos.x = std::rand() % roomSizeX;
    m_artilleryAttackPos.y = std::rand() % roomSizeY;

    room->drawArtilleryAttack(m_artilleryAttackPos.x,m_artilleryAttackPos.y,true);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    room->drawArtilleryAttack(m_artilleryAttackPos.x,m_artilleryAttackPos.y,true);
    if(m_artilleryAttackPos.x == player->getPositionX() && m_artilleryAttackPos.y == player->getPositionY()) {
        player->setHealth(healthAfterDmg);
    }
}






