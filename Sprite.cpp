#include "Sprite.h"
#include "raylib.h"
#include "raymath.h"
#include <iostream>

void Sprite::initSprite(const char* textureURL, Vector2 startPos){
    currentPos = startPos;
    texture = {LoadTexture(textureURL)};
    originRatio = {2,2};
}

void Sprite::initSprite(const char* textureURL, Vector2 startPos, Vector2 specialOrigin){
    currentPos = startPos;
    texture = {LoadTexture(textureURL)};
    originRatio = specialOrigin;
}


Vector2 Sprite::getPos(){
    return currentPos;
}

Vector2 Sprite::getOrigin(){
    return origin;
}

void Sprite::setOrigin(Vector2 inputOrigin){
    origin = inputOrigin;
}


void Sprite::spriteTick(){
   
    float scale = 0.3;
    // GridX, gridY
    gridX = 1.0f;
    gridY = 1.0f;
    rotation++;
    Vector2 currentOrigin = {((float)texture.width*scale)/originRatio.x, ((float)texture.height*scale)/originRatio.y};
    Vector2 changePos = {0.0f, 0.0f};
    Rectangle sourceRec = {0.0f, 0.0f, (float)texture.width, (float)texture.height};
    Rectangle destRec = { currentPos.x, currentPos.y, texture.width*scale, texture.height*scale };
    DrawTexturePro(texture, sourceRec, destRec, currentOrigin, rotation, WHITE);
}

