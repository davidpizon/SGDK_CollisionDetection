#include <genesis.h>
#include <map.h>

#include "global.h"
#include "camera.h"

void setCameraPosition(Camera_t* camera, Map* collisionMap, s16 x, s16 y) {
    if ((x - 160 != camera->position.x) || (y - 120 != camera->position.y)) {
        camera->position.x = x - 160;
        camera->position.y = y - 120;

        if (camera->position.x < 0) {
            camera->position.x = 0;
        } else if (camera->position.x > MAX_X - 320) {
            camera->position.x = MAX_X - 320;
        }
        if (camera->position.y < 0) {
            camera->position.y = 0;
        } else if (camera->position.y > MAX_Y - 120) {
            camera->position.y = MAX_Y - 120;
		}
        MAP_scrollTo(collisionMap, camera->position.x, camera->position.y);
    }
}

/*
void setCameraPosition(s16 x, s16 y)
{
    if ((x-160 != camPosX) || (y-120 != camPosY))
    {
        camPosX = x-160;
        camPosY = y-120;
		
		if (camPosX < 0){
			camPosX = 0;
			
		} else if (camPosX > MAX_X-320) {
			camPosX = MAX_X-320;
		}		
		if (camPosY < 0){
			camPosY = 0;
		} else if (camPosY > MAX_Y-120) {
			camPosY = MAX_Y-120;
		}	
		
		SPR_setPosition(cup_obj, x-camPosX, y-camPosY);
		
		
        MAP_scrollTo(bga, camPosX, camPosY);
    }
}
*/