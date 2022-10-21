#include "raylib.h"
#include "raymath.h"


#ifndef SPRITE_H
#define SPRITE_H

class Sprite{
        /*
            Grid = oneGrid.x/spritseehtImageLength.x and oneGrid.y/spritseehtImageLength.y
            useGrid = Grid Pos in the spritseet.
        */
    public:
        void initSprite(const char* textureURL, Vector2 startPos);
        void initSprite(const char* textureURL, Vector2 startPos, Vector2 specailOrigin);
        Vector2 getPos();
        void spriteTick();
    private:
        Texture2D texture;
        Vector2 origin;
        Vector2 currentPos;
        Vector2 originRatio;
        float scale;
        int rotation = 0;
        int gridX, gridY, needGridX, needGridY;
};


#endif