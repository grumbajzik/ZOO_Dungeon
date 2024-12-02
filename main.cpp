#include <iostream>
#include <vector>
#include <cstdlib>


#include "Room.h"
#include "Player.h"

#ifdef _WIN32
#define CLEAR "cls"
#define RESET "mode con: cols=1 lines=1 && mode con: cols=80 lines=25"
#else
#define CLEAR "clear"
#define RESET "reset"
#endif

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
        system(CLEAR);
        system(RESET);

        room->printRoom();
    }


    std::cout<<"hello"<<std::endl;

    return 0;
}