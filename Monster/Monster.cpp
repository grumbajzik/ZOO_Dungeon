//
// Created by honza on 09.12.2024.
//

#include "Monster.h"

Monster::Monster(int health, int damage, int experience) {
    m_health = health;
    m_damage = damage;
    m_experience = experience;
}

bool Monster::isMonsterAlive() {
    return m_health > 0;
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


