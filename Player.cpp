#include "Player.h"
#include "raylib.h"
#include "raymath.h"
#include <iostream>


void Player::initPlayer(const char* textureURL, float scale){
    // Texture
    texture = {LoadTexture(textureURL)};
    // Define Origin
    origin = {((float)texture.width*scale)/2, ((float)texture.height*scale)/2};
    // GridX, gridY
    gridX = 1.0f;
    gridY = 1.0f;
    
    PlayerRec sprite;
    sprite.pos = {+800.0f, +800.0f};
    sprite.sourceRec = {0.0f, 0.0f, (float)texture.width, (float)texture.height};
    sprite.destRec = { sprite.pos.x, sprite.pos.y, texture.width*scale, texture.height*scale };

    playerRec = sprite;
}




void Player::playerTick(){

    rotation++;
    

    DrawTexturePro(texture, playerRec.sourceRec, playerRec.destRec, origin, rotation, WHITE);
}

