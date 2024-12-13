//
// Created by Admin on 11.12.2024.
//

#ifndef DUNGEON_EDITPLAYERBUTTON_H
#define DUNGEON_EDITPLAYERBUTTON_H

/*TODO:
 * stejně jako newGameButton
 */
#include "Button.h"

class EditPlayerButton : public Button{
public:
    EditPlayerButton();
    void drawButton() override;
    void execute() override;
};


#endif //DUNGEON_EDITPLAYERBUTTON_H
