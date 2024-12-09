cmake_minimum_required(VERSION 3.23)
project(Dungeon)

set(CMAKE_CXX_STANDARD 20)

add_executable(Dungeon main.cpp Room.cpp Room.h
        Player.cpp
        Player.h
        Archer.cpp
        Archer.h
        Warrior.cpp
        Warrior.h
        Monster/AbstractMonsterFactory.cpp
        Monster/AbstractMonsterFactory.h
        Monster/ArtilleryEnemy.cpp
        Monster/ArtilleryEnemy.h
)
