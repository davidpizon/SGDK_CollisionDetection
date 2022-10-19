#include <genesis.h>

#include "world.h"
#include "player.h"

bool checkCollision(Player_t* player, s16 x, s16 y, s16 mapWidth, s16 mapHeight, u8 (*collisionMap)[]) {
	player->isOnFloor = FALSE;
	
	s16 y_tile = y >> 3;
	s16 x_tile = x >> 3;
	
	u8 player_width = 4;
	u8 player_height = 4;
	
	s16 leftTile = x_tile;
	s16 rightTile = x_tile+player_width;
	s16 topTile = y_tile;
	s16 bottomTile = y_tile+player_height;

	for(s16 i=leftTile; i<=rightTile; i++)
	{
		for(s16 j=topTile; j<=bottomTile; j++)
		{
			//if(level[j][i] == 0) {
			if (*( (*collisionMap) + (j * (mapWidth - 1) + i)) == 0) {
				if(j == bottomTile){
					player->isOnFloor = TRUE;
				}
				return FALSE;
			}
		}
	}
	return TRUE;
}
