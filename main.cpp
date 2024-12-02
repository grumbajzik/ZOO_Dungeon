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
        std::cout<<room->getId()<<std::endl;
        std::cout<<room->getRoom()[room->getId()].size()<<std::endl;
        std::cout<<"X: "<<player->getPositionX()<<std::endl;
        std::cout<<"Y: "<<player->getPositionY()<<std::endl;

        player->Move(room);
        room->printRoom();
    }


    std::cout<<"hello"<<std::endl;

    return 0;
}