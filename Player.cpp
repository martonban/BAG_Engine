#include "Player.h"
#include "raylib.h"
#include "raymath.h"
#include <iostream>

void Player::initPlayer(Vector2 startPos){
    currentPos = startPos;
}


Vector2 Player::getPos(){
    return currentPos;
}


void Player::playerTick(){
   
    float scale = 0.3;
    // Define Origin
    origin = {((float)texture.width*scale)/2, ((float)texture.height*scale)/2};
    // GridX, gridY
    gridX = 1.0f;
    gridY = 1.0f;

    Vector2 changePos = {0.0f, 0.0f};

    if(IsKeyDown(KEY_W)){
        changePos.y += 10.f;
    }

    currentPos.y += changePos.y;

    Rectangle sourceRec = {0.0f, 0.0f, (float)texture.width, (float)texture.height};
    Rectangle destRec = { currentPos.x, currentPos.y, texture.width*scale, texture.height*scale };
    DrawTexturePro(texture, sourceRec, destRec, origin, rotation, WHITE);
}

