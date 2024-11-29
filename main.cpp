#include <iostream>
#include <vector>


#include "Room.h"
#include "Player.h"

int main() {
    // Nastavení generátoru náhodných čísel
    Room* room = new Room();
    Player* player = new Player();
    player->Move(room);

    //room->printRoom();
    std::cout<<room->getRoom().size()<<std::endl;
    std::cout<<room->getId()<<std::endl;

    while (true) {
        player->Move(room);
        room->printRoom();
    }


    std::cout<<"hello"<<std::endl;

    return 0;
}