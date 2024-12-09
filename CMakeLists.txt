cmake_minimum_required(VERSION 3.23)
project(Dungeon)

set(CMAKE_CXX_STANDARD 20)

add_executable(Dungeon main.cpp Map/Room.cpp Map/Room.h
        Player/Player.cpp
        Player/Player.h
        Player/Archer.cpp
        Player/Archer.h
        Player/Warrior.cpp
        Player/Warrior.h
        Monster/AbstractMonsterFactory.cpp
        Monster/AbstractMonsterFactory.h
        Monster/ArtilleryEnemy.cpp
        Monster/ArtilleryEnemy.h
        )
