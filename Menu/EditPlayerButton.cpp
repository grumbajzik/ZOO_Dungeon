//
// Created by Admin on 11.12.2024.
//

#include "EditPlayerButton.h"
EditPlayerButton::EditPlayerButton() {
    m_indexOfSkin = 0;
    m_playerSkin.push_back('*');
    m_playerSkin.push_back('$');
    m_playerSkin.push_back('+');
    m_playerSkin.push_back('%');
}

void EditPlayerButton::drawButton() {
    std::cout << "Choose a skin" << std::endl;
}

void EditPlayerButton::execute() {
    system("cls");
    std::cout << "CHOOSE YOUR SKIN" << std::endl << std::endl;


    for (int i = 0; i < m_playerSkin.size(); i++) {
        if (i == m_indexOfSkin){
            std::cout << "->";
        } else {
            std::cout << "  ";
        }
        std::cout << m_playerSkin[i] << std::endl << std::endl;
    }
}

/*
void EditPlayerButton::execute(char input) {
    system("cls");
    std::cout << "CHOOSE YOUR SKIN" << std::endl << std::endl;


    for (int i = 0; i < m_playerSkin.size(); i++) {
        if (i == m_indexOfSkin){
            std::cout << "->";
        } else {
            std::cout << "  ";
        }
        std::cout << m_playerSkin[i] << std::endl << std::endl;
    }
    switchChoice(input);
}

void EditPlayerButton::switchChoice(char input) {

    input = static_cast<int>(input);
    switch (input) {
        case 72: { //up
            if (m_indexOfSkin > 0) {
                m_indexOfSkin--;
            }
            break;
        }
        case 80: {  // down
            if (m_indexOfSkin < m_playerSkin.size() - 1) {
                m_indexOfSkin++;
            }
            break;
        }
        default:
            break;
    }
}

*/

