#include <iostream>
#include <vector>
#include <stdio.h>
#include <conio.h>

#include "Archer.h"
#include "Room.h"
#include "Player.h"
#include "Warrior.h"


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
            char input = _getch();

            player->attack(room,input);
            player->move(room,input);

            room->refreshRoom();


        }
    }

    return 0;
}
