//
// Created by Admin on 14.10.2024.
//

#include <vector>
#include <stdlib.h> // pro rand()
#include <ctime>   // pro time()
#include "Room.h"




    Room::Room() {
        m_room = generateRoom(new Player());
        m_id = s_id++;

    }
    int Room::getId(){
        return m_id;
    }
    void Room::printRoom() {
        for (const auto& row : m_room) {
            for (const auto& cell : row) {
                std::cout << cell << " ";
            }
            std::cout << std::endl;
        }
    }

    std::vector<std::vector<std::string>> Room::generateRoom(Player *player) {
     //   std::srand(std::time(nullptr));
     //   int rows = rand() % 4 + 13;
     //   int cols = rand() % 4 + 13;
        int rows = 7;
        int cols = 7;

        int playerPositionX = player->getPositionX();
        int playerPositionY = player->getPositionY();

        std::vector<std::vector<std::string>> newRoom(rows, std::vector<std::string>(cols));
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++) {
                if(j==0 || j==cols-1 || i==0 || i==rows-1){
                    newRoom.at(i).at(j) = ('#');
                }else if (i == playerPositionX && j == playerPositionY) {
                    newRoom.at(i).at(j) = '*';
                }else{
                    newRoom[i][j]= (' ');
                }
            }
        }
        return newRoom;
    }

std::vector<std::vector<std::string>> Room::getRoom() {
    return m_room;
}

void Room::UpdateRoom() {

}



int Room::s_id = 1;