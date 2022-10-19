#ifndef PLAYER_H
#define PLAYER_H

#include <genesis.h>
#include "global.h"

typedef struct Player
{
    u8 width;
	u8 height;
    bool isMoving;
	bool isOnFloor;
    Point_fix32_t position;
	Point_fix32_t velocity;
} Player_t;

void moveEntity(Player_t* player, s16 mapWidth, s16 mapHeight, u8 (*collisionMap)[]);

//extern Player_t player;

//void handlePlayerInput(Player_t* player);
//void movePlayer(Player_t* player, u8* collisionMap, s16 mapWidth, s16 mapHeight);

#endif // PLAYER_H
