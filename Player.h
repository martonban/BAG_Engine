#include "raylib.h"


#ifndef PLAYER_H
#define PLAYER_H

class Player{
        /*
            Grid = oneGrid.x/spritseehtImageLength.x and oneGrid.y/spritseehtImageLength.y
            useGrid = Grid Pos in the spritseet.
        */
    public:
        void initPlayer(const char* textureURL, float scale);
        void changeGrid(Vector2 grid);
        void playerTick();
        struct PlayerRec{
            // Pos 
            Rectangle destRec;
            Rectangle sourceRec;
            Vector2 pos;
        };
        
    private:
        Texture2D texture;
        PlayerRec playerRec;
        Vector2 origin;
        int gridX, gridY, needGridX, needGridY;
};


#endif