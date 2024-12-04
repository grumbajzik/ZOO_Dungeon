#include <iostream>
#include <vector>
#include <stdio.h>
#include <conio.h>

#include "Room.h"
#include "Player.h"




int main() {

    Room* room = new Room();
    Player* player = new Player();
    player->Move(room,'f');

    std::cout<<room->getRoom().size()<<std::endl;
    std::cout<<room->getId()<<std::endl;

    room->printRoom();
    while (true) {
        while (kbhit() != 0) {
            char input = getch();
            player->Move(room,input);
            room->refreshRoom();
        }
    }

    return 0;
}