#ifndef CAMERA_H
#define CAMERA_H

#include <genesis.h>
#include <map.h>

#include "global.h"

typedef struct Camera
{
    Point_s32_t position;
} Camera_t;

void setCameraPosition(Camera_t* camera, Map* collisionMap, s16 x, s16 y);

#endif // CAMERA_H
