#include <iostream>
#include <vector>
#include <stdio.h>
#include <conio.h>

#include "Player/Archer.h"
#include "Map/Room.h"
#include "Monster/Trap.h"
#include "Player/Player.h"
#include "Player/Warrior.h"


int main() {
    Room* room = new Room();
    Trap* trap = new Trap();
    Player* player = nullptr;
    std::cout << "###############################\n";
    std::cout << "#                             #\n";
    std::cout << "#           DUNGEON           #\n";
    std::cout << "#                             #\n";
    std::cout << "###############################\n";
    system("pause");
    system("cls");

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
    trap->makeTrapInRoom(room);
    player->move(room,'f');
    room->printRoom();


    while (player->isAlive()) {
        while (kbhit() != 0) {
            unsigned char input = _getch();

            player->attack(room,input);
            player->move(room,input);

            trap->treatPlayer(player);
            player->printInformation();
            room->refreshRoom();
        }
    }
    system("cls");
    std::cout << "YOU DIED" << std::endl;
    system("pause");

    delete room;
    delete player;
    delete trap;
    return 0;
}
