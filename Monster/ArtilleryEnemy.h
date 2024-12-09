//
// Created by honza on 09.12.2024.
//

#ifndef ARTILLERYENEMY_H
#define ARTILLERYENEMY_H

#include <iostream>

class ArtilleryEnemy {
    int m_health;
    int m_damage;
    int m_experience;
    public:

    ArtilleryEnemy(int health, int damage, int experience);

    int getHealth();

    int getDamage();

    int getExperience();
};



#endif //ARTILLERYENEMY_H
