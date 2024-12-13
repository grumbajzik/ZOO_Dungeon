#include <iostream>
#include <vector>
#include <stdio.h>
#include <conio.h>
#include <thread>

#include "Player/Archer.h"
#include "Map/Room.h"
#include "Menu/Menu.h"
#include "Monster/MonsterFactory.h"
#include "Monster/Trap.h"
#include "Player/Player.h"
#include "Player/Warrior.h"







int main() {

    Menu* menu = new Menu();

    unsigned char input;
    while (true) {
        menu->runMenu(input);
        input = _getch();
    }


    delete menu;
    return 0;
}
