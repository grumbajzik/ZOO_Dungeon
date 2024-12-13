//
// Created by Admin on 11.12.2024.
//

#include "NewGameButton.h"

NewGameButton::NewGameButton() {
    m_indexOfPlayer = 1;
    m_newPlayer.push_back("Archer");
    m_newPlayer.push_back("Warrior");

}

void NewGameButton::execute() {
    switchPlayer();
    createHero();

}

void NewGameButton::drawButton() {
    std::cout << "Start a new game." << std::endl;
}

void NewGameButton::switchChoice(char input) {
    input = static_cast<int>(input);
    switch (input) {
        case 72: { //up
            if (m_indexOfPlayer > 0) {
                m_indexOfPlayer--;
            }
            break;
        }
        case 80: {  // down
            if (m_indexOfPlayer < 3) {
                m_indexOfPlayer++;
            }
            break;
        }
        default:
            break;
    }
}

void NewGameButton::switchPlayer() {
    system("cls");
    char input;
    while (input != '\r') {
        input = _getch();
        switchChoice(input);
        system("cls");
        std::cout << "CHOOSE YOUR CLASS" << std::endl << std::endl;

        for (int i = 0; i < m_newPlayer.size(); i++) {
            if (i == m_indexOfPlayer){
                std::cout << "->";
            } else {
                std::cout << "  ";
            }
            std::cout << m_newPlayer[i] << std::endl << std::endl;
        }
    }
}

Player* NewGameButton::createHero(PlayerFactory *playerFactory) {
    playerFactory->createPlayer(m_indexOfPlayer);
}





