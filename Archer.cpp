//
// Created by honza on 07.12.2024.
//

#include "Archer.h"


Archer::Archer(): Player(80,5,8) {
    m_attackRange = 4;
}


void Archer::attack(Room *room, char input) {
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
