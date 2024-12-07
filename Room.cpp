//
// Created by Admin on 14.10.2024.
//

#include <vector>
#include <stdlib.h> // pro rand()
#include <ctime>   // pro time()
#include "Room.h"
#include <conio.h>




    Room::Room() {
        m_room = generateRoom();
        m_id = s_id++;
        m_lastAttack = {-1,-1};

    }
    int Room::getId(){
        return m_id;
    }
    void Room::printRoom() {
        clearRoom();
        for (auto& row : m_room) {
            for (auto& cell : row) {
                std::cout << cell << " ";
            }
            std::cout << std::endl;
        }
    }

    void Room::refreshRoom() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  //ukazatel na obrazovku
        SetConsoleCursorPosition(hConsole, {0, 0});   //nastaveni na 0,0
        for (auto& row : m_room) {
            std::string value = "";
            for (auto& cell : row) {
                value += (cell + " ");
            }
            std::cout << value << std::endl;
        }
    }

    std::vector<std::vector<std::string>> Room::generateRoom() {
        std::srand(std::time(nullptr));
        int rows = rand() % 4 + 13;
        int cols = rand() % 4 + 13;


        std::vector<std::vector<std::string>> newRoom(rows, std::vector<std::string>(cols));
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++) {
                if(j==0 || j==cols-1 || i==0 || i==rows-1) {
                    newRoom.at(i).at(j) = ('#');
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

void Room::updatePlayerPosition(int x,int y, bool newPosition) {
         if (newPosition) {
             m_room.at(x).at(y) = '*';
         } else {
             m_room.at(x).at(y) = ' ';
         }
    }

void Room::drawPlayerAttack(int x, int y, bool isAttack) {
        if (m_lastAttack.first != -1 && m_lastAttack.second != -1) {
            m_room.at(m_lastAttack.first).at(m_lastAttack.second) = " ";
        }

        if (x < m_room.size()-1 && y < m_room[0].size()-1 && x > 0 && y > 0) {
            if (isAttack) {
                m_room.at(x).at(y) = '-';
                m_lastAttack = {x,y};
            }else {
                m_lastAttack = {-1,-1};
            }
        }
    }

void Room::clearRoom() {
        system("cls");
    }



int Room::s_id = 0;