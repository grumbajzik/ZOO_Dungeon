//
// Created by Admin on 11.12.2024.
//

#include "Menu.h"

#include <conio.h>


Menu::Menu() {
    m_command.push_back(new NewGameButton());
    m_command.push_back(new ExitButton());
    m_command.push_back(new EditPlayerButton());
    m_chosenCommand = nullptr;
    m_chosenIndex = 1;
}

void Menu::printMenu() {
    std::cout << "=========================" << std::endl;
    std::cout << "      DUNGEON ZOO      " << std::endl;
    std::cout << "=========================" << std::endl;
    std::cout << "1. Spustit hru" << std::endl;
    std::cout << "2. Zmenit vzhled" << std::endl;
    std::cout << "3. Ukoncit hru" << std::endl;
}

int Menu::getchenIndex() {
    return m_chosenIndex;
}


void Menu::doSelectedCommand() {

}

void Menu::choseCommand(char input) {
    input = static_cast<int>(input);
    switch (input) {
        case 72: { //up
            if (m_chosenIndex > 1) {
                m_chosenIndex--;
            }
            break;
        }
        case 80: {  // down
            if (m_chosenIndex < 3) {
                m_chosenIndex++;
            }
            break;
        }
        default:
            break;
    }
}


