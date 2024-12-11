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
}

void Menu::printMenu() {
    std::cout << "=========================" << std::endl;
    std::cout << "      Textova Hra       " << std::endl;
    std::cout << "=========================" << std::endl;
    std::cout << "1. Spustit hru" << std::endl;
    std::cout << "2. Napoveda" << std::endl;
    std::cout << "3. Ukoncit hru" << std::endl;
}

void Menu::doSelectedCommand() {

}

void Menu::choseCommand(char input) {
    m_chosenIndex = 1;
    input = static_cast<int>(input);
    switch (input) {
        case 72: {
            std::cout<<"72"<<std::endl;
            if (m_chosenIndex < 3) {
                m_chosenIndex++;
            } else {
                m_chosenIndex = 3;
            }
            break;

        }


        case 80: {
            std::cout<<"80"<<std::endl;
            if (m_chosenIndex > 1) {
                m_chosenIndex--;
            } else {
                m_chosenIndex = 1;
            }
            break;
        }
    }
}


