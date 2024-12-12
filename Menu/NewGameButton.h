//
// Created by Admin on 11.12.2024.
//

#ifndef DUNGEON_NEWGAMEBUTTON_H
#define DUNGEON_NEWGAMEBUTTON_H


#include "Button.h"
/*TODO: Tady se bude vytvářet konkrétní tlačítko pomocí konstruktoru nastavíme text.
 * Dále implementujeme metodu z command která prozatím vypíše že bylo stisknuto tlačítko new game
 */


class NewGameButton : public Button{
public:
    NewGameButton();
    void drawButton() override;
    void execute() override;
};


#endif //DUNGEON_NEWGAMEBUTTON_H
