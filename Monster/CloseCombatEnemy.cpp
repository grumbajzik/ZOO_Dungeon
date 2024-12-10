//
// Created by honza on 09.12.2024.
//

#include "CloseCombatEnemy.h"

CloseCombatEnemy::CloseCombatEnemy() : Monster(120,50,100) {
    m_CloseCombatChar = 'C';
}

char CloseCombatEnemy::getCloseCombatChar() {
    return m_CloseCombatChar;
}

void CloseCombatEnemy::attack() {

}

void CloseCombatEnemy::deffence() {

}


