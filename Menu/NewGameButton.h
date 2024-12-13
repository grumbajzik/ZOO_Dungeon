//
// Created by Admin on 11.12.2024.
//

#ifndef DUNGEON_NEWGAMEBUTTON_H
#define DUNGEON_NEWGAMEBUTTON_H

#include <vector>
#include "Button.h"
#include <conio.h>

class NewGameButton : public Button{
    std::vector<std::string> m_newPlayer;
    int m_indexOfPlayer;
public:
    NewGameButton();
    void drawButton() override;
    void execute() override;
};


#endif //DUNGEON_NEWGAMEBUTTON_H
