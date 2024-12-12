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
        Monster/ArtilleryEnemy.cpp
        Monster/ArtilleryEnemy.h
        Monster/Monster.cpp
        Monster/Monster.h
        Monster/Trap.cpp
        Monster/Trap.h
        Monster/CloseCombatEnemy.cpp
        Monster/CloseCombatEnemy.h
        Monster/MonsterFactory.cpp
        Monster/MonsterFactory.h
        Map/Map.cpp Map/Map.h Map/Tile.cpp Map/Tile.h Menu/NewGameButton.cpp Menu/NewGameButton.h Menu/EditPlayerButton.cpp Menu/EditPlayerButton.h Menu/Button.cpp Menu/Button.h Menu/ExitButton.cpp Menu/ExitButton.h Menu/Menu.cpp Menu/Menu.h
        Player/PlayerFactory.cpp
        Player/PlayerFactory.h)
