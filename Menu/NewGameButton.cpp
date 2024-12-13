//
// Created by Admin on 11.12.2024.
//

#include "NewGameButton.h"


NewGameButton::NewGameButton() {
    m_indexOfPlayer = 0;
    m_newPlayer.push_back("Archer");
    m_newPlayer.push_back("Warrior");
}

void NewGameButton::execute() {
    system("cls");
    std::cout << "Choose a character." << std::endl;
    }


void NewGameButton::drawButton() {
    std::cout << "Start a new game." << std::endl;
}





