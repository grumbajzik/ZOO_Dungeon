#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> // pro rand()
#include <ctime>   // pro time()

#include "Room.h"

int main() {
    // Nastavení generátoru náhodných čísel
    Room* room = new Room;
    room->printRoom();
    std::cout<<room->getRoom().size()<<std::endl;
    std::cout<<room->getId()<<std::endl;

    return 0;
}