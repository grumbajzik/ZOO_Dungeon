//
// Created by honza on 09.12.2024.
//

#include "ArtilleryEnemy.h"

ArtilleryEnemy::ArtilleryEnemy(int health, int damage, int experience) {
    m_health = health;
    m_damage = damage;
    m_experience = experience;
}

int ArtilleryEnemy::getHealth() {
    return m_health;
}

int ArtilleryEnemy::getDamage() {
    return m_damage;
}

int ArtilleryEnemy::getExperience() {
    return m_experience;
}



