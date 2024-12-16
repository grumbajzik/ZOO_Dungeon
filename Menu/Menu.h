//
// Created by Admin on 11.12.2024.
//

#ifndef DUNGEON_MENU_H
#define DUNGEON_MENU_H
#include <vector>
#include <windows.h>

#include "EditPlayerButton.h"
#include "ExitButton.h"
#include "NewGameButton.h"
#include <iostream>
#include <conio.h>


class Menu {
    std::vector<Button *> m_buttons;
    Button* m_chosenButton;
    bool m_isRefresh;
    int m_index;
    bool m_firstRun;

    void printMenu();
    void callButton(char input);
    void switchButton(char input);
    void refreshMenu();

public:

    Menu();
    ~Menu();
    void runMenu(char input);
    void setFirstRun();
};


#endif //DUNGEON_MENU_H
