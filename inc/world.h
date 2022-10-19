#ifndef WORLD_H
#define WORLD_H

#include <genesis.h>

#include "player.h"

bool checkCollision(Player_t* player, s16 x, s16 y, s16 mapWidth, s16 mapHeight, u8 (*collisionMap)[]);

#endif // WORLD_H
