//
// Created by Admin on 14.10.2024.
//

#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>
#include <windows.h>
#include "mutex"


class Room{
public:
    Room();
    void printRoom();
    void refreshRoom();
    int getId();
    std::vector<std::vector<std::string>> getRoom();
    void updatePlayerPosition(int x,int y, bool newPosition);
    void drawPlayerAttack(int x,int y, bool isAttack);
    void drawPlayerAttackOnRange(int range,int x,int y,int direction,bool isAttack);
    void drawTrap(int x, int y, char trap);

    int getSizeOfRoomX();
    int getSizeOfRoomY();


private:
    std::mutex m_consoleMutex;
    std::vector<std::vector<std::string>> m_room;
    std::vector<std::vector<std::string>> m_originalRoom;
    static int s_id;
    int m_id ;
    std::pair<int,int> m_lastAttack; //na uchovani posledniho utoku na blizko
    std::string m_playerPreviousMove = " ";
    std::string m_attackPrevoiousSign = " ";
    std::vector<std::vector<std::string>> generateRoom();
    void clearRoom();
};

#endif