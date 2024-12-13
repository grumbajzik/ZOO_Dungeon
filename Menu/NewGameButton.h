//
// Created by Admin on 11.12.2024.
//

#ifndef DUNGEON_NEWGAMEBUTTON_H
#define DUNGEON_NEWGAMEBUTTON_H

#include <vector>
#include "Button.h"
#include <conio.h>
#include <thread>

#include "../Player/PlayerFactory.h"

class NewGameButton : public Button{
    PlayerFactory* m_playerFactory;
    std::vector<std::string> m_newPlayer;
    int m_indexOfPlayer;

private:
    void runGame();
    void switchChoice(char input);
    void selectPlayer();
    Player* createPlayer();

public:
    NewGameButton();

    void drawButton() override;

    void execute() override;

};


#endif //DUNGEON_NEWGAMEBUTTON_H
