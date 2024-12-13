//
// Created by Admin on 11.12.2024.
//

#ifndef DUNGEON_NEWGAMEBUTTON_H
#define DUNGEON_NEWGAMEBUTTON_H


#include "Button.h"

class NewGameButton : public Button{
public:
    NewGameButton();
    void drawButton() override;
    void execute() override;
};


#endif //DUNGEON_NEWGAMEBUTTON_H
