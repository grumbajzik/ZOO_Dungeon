//
// Created by Admin on 11.12.2024.
//

#ifndef DUNGEON_BUTTON_H
#define DUNGEON_BUTTON_H
#include <string>
#include <iostream>


class Button{
public:
    Button();
    virtual void drawButton() = 0;
    virtual void execute() = 0;
};


#endif //DUNGEON_BUTTON_H
