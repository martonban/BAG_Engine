#include "raylib.h"
#include "raymath.h"


#ifndef PLAYER_H
#define PLAYER_H

class Player{
        /*
            Grid = oneGrid.x/spritseehtImageLength.x and oneGrid.y/spritseehtImageLength.y
            useGrid = Grid Pos in the spritseet.
        */
    public:
        void initPlayer(Vector2 startPos);
        void changeGrid(Vector2 grid);
        Vector2 getPos();
        void playerTick();
        Texture2D texture = {LoadTexture("###########")};
    private:
        Vector2 origin;
        Vector2 currentPos;
        float scale;
        int rotation = 0;
        int gridX, gridY, needGridX, needGridY;
};


#endif