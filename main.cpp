#include <iostream>
#include <vector>


#include "Room.h"
#include "Player.h"

int main() {
    // Nastavení generátoru náhodných čísel
    Room *room = new Room();
    Player *player = new Player();
    player->Move(room, ' ');
    char input;
    std::cout << room->getRoom().size() << std::endl;
    std::cout << room->getId() << std::endl;

    for (;;){
        std::cin>>input;
        player->Move(room, input);
        room->printRoom();
    }



    std::cout<<"hello"<<std::endl;

    return 0;
}
