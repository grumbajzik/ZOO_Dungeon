//
// Created by Admin on 11.12.2024.
//

#include "Menu.h"

#include <conio.h>


Menu::Menu() {
    m_buttons.push_back(new NewGameButton());
    m_buttons.push_back(new EditPlayerButton());
    m_buttons.push_back(new ExitButton());
    m_firstRun = true;
    m_index = 0;
    m_chosenButton = m_buttons.at(m_index);
}

Menu::~Menu() {
    for (auto button : m_buttons) {
        delete button;
    }
}

void Menu::printMenu() {
    system("cls");
    std::cout << "=========================" << std::endl;
    std::cout << "      DUNGEON ZOO      " << std::endl;
    std::cout << "=========================" << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < m_buttons.size(); i++) {
        if (i == m_index){
            std::cout << "->";
        } else {
            std::cout << "  ";
        }
        m_buttons.at(i)->drawButton();
    }
}


void Menu::switchButton(char input) {
    input = static_cast<int>(input);
    switch (input) {
        case 72: { //up
            if (m_index > 0) {
                m_index--;
            }
            break;
        }
        case 80: {  // down
            if (m_index < m_buttons.size() - 1) {
                m_index++;
            }
            break;
        }
        default:
            break;
    }
    m_chosenButton = m_buttons.at(m_index);
}

void Menu::callButton(char input) {
    if (input == '\r') {
        m_chosenButton->execute();
    }
}

void Menu::refreshMenu() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, {0, 0});
    std::cout << "\n" << "\n" << "\n" << std::endl;
    for (int i = 0; i < m_buttons.size(); i++) {
        if (i == m_index){
            std::cout << "->";
        }else{
            std::cout << "  ";
        }
        m_buttons.at(i)->drawButton();
    }
}

void Menu::runMenu(char input) {
    switchButton(input);
    callButton(input);
    if(m_firstRun) {
        printMenu();
        m_firstRun = false;
    }else {
        refreshMenu();
    }
}






