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
void backgroundRefresh(Room* room) {
    while (true) {
        room->refreshRoom();
        std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Pauza mezi vykreslením
    }
}



int main() {

    Menu* menu = new Menu();
    Room* room = new Room();
    Trap* trap = new Trap();
    MonsterFactory* monsterFactory = new MonsterFactory();
    Player* player = nullptr;
    /*
    menu->printMenu();
    while (true) {
        unsigned char input = _getch();
        menu->choseCommand(input);
    }
    */
    char choice;
    std::cout << "zvolte postavu a/w"<<std::endl;
    std::cin >> choice;
    system("cls");
    while(choice != 'a' && choice != 'w') {
        std::cout<<"Spatne zadane hodnoty \nzkus znovu a/w"<<std::endl;
        std::cin >> choice;
        system("cls");
    }


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

    monsterFactory->createMonster(MonsterType::Artillery);
    monsterFactory->createMonster(MonsterType::CloseCombat);

    std::cout<<room->getRoom().size()<<std::endl;
    std::cout<<room->getId()<<std::endl;
    trap->makeTrapInRoom(room);
    player->move(room,'f');
    room->printRoom();
    std::thread refreshThread(backgroundRefresh, room);
    refreshThread.detach();
    while (player->isAlive()) {
            unsigned char input = _getch();


            player->attack(room,input);
            player->move(room,input);

            trap->treatPlayer(player);
//            player->printInformation();
//            std::thread refreshThread(&Room::refreshRoom, room);
    }
    system("cls");
    std::cout << "YOU DIED" << std::endl;
    system("pause");

    delete room;
    delete player;
    delete trap;
    delete monsterFactory;
    return 0;
}
