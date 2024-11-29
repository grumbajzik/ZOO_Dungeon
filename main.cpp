#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> // pro rand()
#include <ctime>   // pro time()

#include "Room.h"
#include "Player.h"

int main() {
    // Nastavení generátoru náhodných čísel
    Room* room = new Room();
    Player* player = new Player();

    while (true) {
        room->printRoom();

        player->Move();
    }

    room->printRoom();
    std::cout<<room->getRoom().size()<<std::endl;
    std::cout<<room->getId()<<std::endl;
    std::cout<<"hello"<<std::endl;

    return 0;
}