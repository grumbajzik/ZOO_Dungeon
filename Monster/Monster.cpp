//
// Created by honza on 09.12.2024.
//

#include "Monster.h"

#include "../Player/Archer.h"

Monster::Monster(int health, int damage, int experience) {
    m_health = health;
    m_damage = damage;
    m_experience = experience;
}

bool Monster::isMonsterAlive() {
    return m_health > 0;
}

void Monster::defence(Archer* archer) {
    //archer
    if (archer->getBulletPosition().x == m_mosterPosition.x && archer->getBulletPosition().y == m_mosterPosition.y) {
        m_health -= archer->getStrength();
    }
}

void Monster::defence(Warrior *warrior) {
    if (warrior->getWeaponPosition().x == m_mosterPosition.x && warrior->getWeaponPosition().y == m_mosterPosition.y) {
        m_health -= warrior->getStrength();
    }
}

int Monster::getDamage() {
    return m_damage;
}

int Monster::getExperience() {
    return m_experience;
}

int Monster::getHealth() {
    return m_health;
}


