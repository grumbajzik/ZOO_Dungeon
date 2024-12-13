//
// Created by Admin on 11.12.2024.
//

#ifndef DUNGEON_EDITPLAYERBUTTON_H
#define DUNGEON_EDITPLAYERBUTTON_H

/*TODO:
 * stejně jako newGameButton
 */
#include <vector>

#include "Button.h"

class EditPlayerButton : public Button{

    std::vector<char> m_playerSkin;
    int m_indexOfSkin;
    char m_chosenSkin;

    void switchChoice(char input);
    void selectSkin();

public:
    EditPlayerButton();
    void drawButton() override;
    void execute() override;

};


#endif //DUNGEON_EDITPLAYERBUTTON_H
