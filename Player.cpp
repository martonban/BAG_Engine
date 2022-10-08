#include "Player.h"
#include "raylib.h"
#include "raymath.h"
#include <iostream>


void Player::initPlayer(const char* textureURL, float scale){
    // Texture
    texture = {LoadTexture(textureURL)};
    // Define Origin
    origin = {(float)texture.width, (float)texture.height};
    // GridX, gridY
    gridX = 1.0f;
    gridY = 1.0f;
    
    PlayerRec sprite;
    sprite.pos = {100.0f, 1000.0f};
    sprite.sourceRec = {0.0f, 0.0f, (float)texture.width, (float)texture.height};
    sprite.destRec = { sprite.pos.x, sprite.pos.y, texture.width*scale, texture.height*scale };

    playerRec = sprite;
}




void Player::playerTick(){

    int rotatinon = 0;

    if (IsKeyDown(KEY_W)){
        //rotatinon++;
        playerRec.destRec = { playerRec.pos.x+10, playerRec.pos.y, texture.width*2, texture.height*2 };
    }

    DrawTexturePro(texture, playerRec.sourceRec, playerRec.destRec, origin, rotatinon, WHITE);
}

