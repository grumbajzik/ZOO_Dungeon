#include <iostream>
#include <vector>
#include <stdio.h>
#include <conio.h>

#include "Player/Archer.h"
#include "Map/Room.h"
#include "Player/Player.h"
#include "Player/Warrior.h"


int main() {
    Room* room = new Room();
    Player* player = nullptr;

    char choice;
    std::cout << "zvolte postavu a/w"<<std::endl;
    std::cin >> choice;


    switch (choice) {
        case 'a':
            player = new Archer();
            break;
        case 'w':
            player = new Warrior();
            break;
        default:
            break;
    }

    std::cout<<room->getRoom().size()<<std::endl;
    std::cout<<room->getId()<<std::endl;

    player->move(room,'f');
    room->printRoom();


    while (true) {
        while (kbhit() != 0) {
            unsigned char input = _getch();

            player->attack(room,input);
            player->move(room,input);

            room->refreshRoom();
        }
    }

    delete room;
    delete player;
    return 0;
}
