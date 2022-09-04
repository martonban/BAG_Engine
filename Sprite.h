#include "raylib.h"
#include <iostream>

#ifndef SPRITE_H
#define SPRITE_H

class Sprite{
    public:
        /*
            Grid = oneGrid.x/spritseehtImageLength.x and oneGrid.y/spritseehtImageLength.y
            useGrid = Grid Pos in the spritseet.
        */
        void initSprite(const char* textureURL, Vector2 grid, float scale);
        void initSprite(const char* textureURL, Vector2 grid, float scale, Vector2 useGrid);
        void changeGrid(Vector2 grid);
        void drawGrid(Vector2 pos);
    private:
        Texture2D texture;
        int gridX, gridY, needGridX, needGridY;
        struct SpriteRec
        {
            Rectangle rec;
            Vector2 pos; 
        };

};
#endif