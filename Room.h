//
// Created by Admin on 14.10.2024.
//

#ifndef ROOM_H;
#define ROOM_H;

#include <iostream>
#include <vector>

class Room{
public:
    Room();
    void printRoom();
    int getId();
    std::vector<std::vector<std::string>> getRoom();


private:
    std::vector<std::vector<std::string>> m_room;
    static int s_id;
    int m_id ;
    std::vector<std::vector<std::string>> generateRoom();
};

#endif