//
// Created by Admin on 11.12.2024.
//

#ifndef DUNGEON_EXITBUTTON_H
#define DUNGEON_EXITBUTTON_H


#include "Button.h"
#include "Menu.h"
/*Todo:
 * stejně jako new game button metoda execute bude obsahovat jen exit(0) předtím teoreticky jen nějáký výstup že se hra ukončuje
 * */
class ExitButton : public Button{
public:
    ExitButton();
    void drawButton() override;
    void execute() override;

    int executeWithResult();
};

class ExitMenu {
    public:
    int executeWithResult();
};


#endif //DUNGEON_EXITBUTTON_H
