//
// Created by Admin on 14.10.2024.
//

#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>
#include <windows.h>



class Room{
public:
    Room();
    void printRoom();
    void refreshRoom();
    int getId();
    std::vector<std::vector<std::string>> getRoom();
    void updateRoom(int x,int y, bool newPosition);


private:
    std::vector<std::vector<std::string>> m_room;
    static int s_id;
    int m_id ;
    std::vector<std::vector<std::string>> generateRoom();
    void clearRoom();
};

#endif