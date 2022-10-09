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
        void initSprite(Vector2 startPos);
        void changeGrid(Vector2 grid);
        Vector2 getPos();
        void spriteTick();
        Texture2D texture = {LoadTexture("Assets/cuteCharacter.png")};
    private:
        Vector2 origin;
        Vector2 currentPos;
        float scale;
        int rotation = 0;
        int gridX, gridY, needGridX, needGridY;
};


#endif