//
// Created by Admin on 10.12.2024.
//

#ifndef DUNGEON_TILE_H
#define DUNGEON_TILE_H

enum TileType{
    FLOOR,
    TRAP,
    MONSTER,
    POTION
};
class Tile {
private:
    char symbol;
    TileType tileType;
    int tilePositionX;
    int tilePositionY;


};


#endif //DUNGEON_TILE_H
