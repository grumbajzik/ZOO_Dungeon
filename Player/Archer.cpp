//
// Created by honza on 07.12.2024.
//

#include "Archer.h"
#include <thread>
#include <conio.h>

Archer::Archer(): Player(80,5,8) {
    m_attackRange = 4;
}

PlayerPosition Archer::getBulletPosition() {
    return m_bulletPosition;
}



void Archer::attack(Room *room, unsigned char input) {
    //TODO: tato metoda převádí znak na číslo. Jelikož šipka nahoru není v základních znacích ascii tak se to převede na  224 a pak na 72 proto tato metoda má i getch
    int arrow = static_cast<int>(input);
    int direction = -1;
    m_bulletPosition.x = m_position.x;
    m_bulletPosition.y = m_position.y;


    room->drawPlayerAttackOnRange(m_attackRange,m_bulletPosition.x,m_bulletPosition.y,direction, false);
    //TODO: tato podmínka kontroluje že to je speciální znak. H má asci kód 72 a šipka nahoru 224 72.
    if(arrow == 224) {
        int specialKey = _getch();

        switch (specialKey) {
            case 72: {
                m_bulletPosition.x--;
                direction = 1; //up
                std::thread shootingThread(&Room::drawPlayerAttackOnRange,
                                           room,
                                           m_attackRange,
                                           (m_bulletPosition.x),  // Předání jako reference
                                           (m_bulletPosition.y),
                                           direction,
                                           true);
                shootingThread.detach();
                break;
            }
            case 80: {
                m_bulletPosition.x++;
                direction = 2; //down
                std::thread shootingThread(&Room::drawPlayerAttackOnRange,
                                           room,
                                           m_attackRange,
                                           (m_bulletPosition.x),  // Předání jako reference
                                           (m_bulletPosition.y),
                                           direction,
                                           true);
                shootingThread.detach();
                break;
            }
            case 75: {
                m_bulletPosition.y--;
                direction = 3; //left
                std::thread shootingThread(&Room::drawPlayerAttackOnRange,
                                           room,
                                           m_attackRange,
                                           (m_bulletPosition.x),  // Předání jako reference
                                           (m_bulletPosition.y),
                                           direction,
                                           true);
                shootingThread.detach();
                break;
            }
            case 77: {
                m_bulletPosition.y++;
                direction = 4; //right
                std::thread shootingThread(&Room::drawPlayerAttackOnRange,
                                           room,
                                           m_attackRange,
                                           (m_bulletPosition.x),  // Předání jako reference
                                           (m_bulletPosition.y),
                                           direction,
                                           true);
                shootingThread.detach();
                break;
            }
            default:
                break;
        }
    }
}
