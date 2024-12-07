#include <iostream>
#include <vector>
#include <stdio.h>
#include <conio.h>

#include "Room.h"
#include "Player.h"




int main() {

    Room* room = new Room();
    Player* player = new Player();

    std::cout<<room->getRoom().size()<<std::endl;
    std::cout<<room->getId()<<std::endl;

    player->move(room,'f');
    room->printRoom();


    while (true) {
        while (kbhit() != 0) {
            char input = getch();

            //player->attack(room,input);
            player->attackOnDistance(room,input);
            player->move(room,input);

            room->refreshRoom();


        }
    }

    return 0;
}