//
// Created by honza on 07.12.2024.
//

#include "Warrior.h"


Warrior::Warrior(): Player(100,10,15) {
}


void Warrior::attack(Room *room,unsigned char input) {
    //utok na blizko
    int arrow = static_cast<int>(input);
    m_weaponPosition.x = m_position.x;
    m_weaponPosition.y = m_position.y;
    room->drawPlayerAttack(m_weaponPosition.x,m_weaponPosition.y, false);

    switch (arrow) {
        case 72:
            //sipka nahoru
            m_weaponPosition.x -= 1;
            room->drawPlayerAttack(m_weaponPosition.x,m_weaponPosition.y, true);
            break;
        case 80:
            //sipka dolu
            m_weaponPosition.x += 1;
            room->drawPlayerAttack(m_weaponPosition.x,m_weaponPosition.y, true);
            break;
        case 75:
            //sipka doleva
            m_weaponPosition.y -= 1;
            room->drawPlayerAttack(m_weaponPosition.x,m_weaponPosition.y, true);
            break;
        case 77:
            //sipka doprava
            m_weaponPosition.y += 1;
            room->drawPlayerAttack(m_weaponPosition.x,m_weaponPosition.y, true);
            break;
        default:
            room->drawPlayerAttack(m_weaponPosition.x,m_weaponPosition.y, false);
            break;
    }
}
