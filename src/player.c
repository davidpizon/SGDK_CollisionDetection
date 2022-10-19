#include <genesis.h>

#include "player.h"
#include "world.h"

void moveEntity(Player_t* plr, s16 mapWidth, s16 mapHeight, u8 (*collisionMap)[]) {
	s16 posX = fix32ToInt(plr->position.x);
	s16 posY = fix32ToInt(plr->position.y);
	
	s16 testPosX;
	s16 testPosY;
	
	s16 spdX = fix32ToInt(plr->velocity.x);
	s16 spdY = fix32ToInt(plr->velocity.y);
	
	if(checkCollision(plr, posX+spdX, posY+spdY, mapWidth, mapHeight, collisionMap) == 1) {
		posX += spdX;
		posY += spdY;
	} else {
		if (spdX) {
			testPosX = posX;
			if (spdX > 0) {
				for(u8 i=1;i<spdX;i++){
					testPosX++;
					if(checkCollision(plr, testPosX, posY, mapWidth, mapHeight, collisionMap)) {
						posX = testPosX;
					} else {
						break;
					}	
				}
			} else {
				for(u8 i=spdX;i>0;i++){
					testPosX--;
					if(checkCollision(plr, testPosX, posY, mapWidth, mapHeight, collisionMap)) {
						posX = testPosX;
					} else {
						break;
					}	
				}
			}
		}
		if (spdY) {
			testPosY = posY;
			if (spdY > 0) {
				for(u8 i=1;i<spdY;i++){
					testPosY++;
					if(checkCollision(plr, posX, testPosY, mapWidth, mapHeight, collisionMap)) {
						posY = testPosY;
					} else {
						break;
					}
				}
			} else {
				for(u8 i=spdY;i>0;i++){
					testPosY--;
					if(checkCollision(plr, posX, testPosY, mapWidth, mapHeight, collisionMap)) {
						posY = testPosY;
					} else {
						break;
					}
				}
			}
		}
	}
	
	plr->position.x = FIX32(posX);
	plr->position.y = FIX32(posY);
}

