//
// Created by Admin on 11.12.2024.
//

#ifndef DUNGEON_EXITBUTTON_H
#define DUNGEON_EXITBUTTON_H


#include "Button.h"
#include "Menu.h"

class ExitButton : public Button{
public:
    ExitButton();
    void drawButton() override;
    void execute() override;
};



#endif //DUNGEON_EXITBUTTON_H
