#include "Sprite.h"
#include "raylib.h"
#include "raymath.h"
#include <iostream>

    
    void Sprite::initSprite(const char* textureURL, Vector2 startPos){
        currentPos = startPos;
        texture = {LoadTexture(textureURL)};
        originRatio = {2,2};
        spriteSize = {(float)texture.width, (float)texture.height};
        sheetPos = {0,0};
    }


    void Sprite::initSprite(const char* textureURL, Vector2 startPos, Vector2 specialOrigin){
        currentPos = startPos;
        texture = {LoadTexture(textureURL)};
        originRatio = specialOrigin;
        spriteSize = {texture.width, texture.height};
        sheetPos = {1,1};
    }


    void Sprite::initSprite(const char* textureURL, Vector2 startPos, Vector2 oneSpriteSize, Vector2 givenSheetPos){
        currentPos = startPos;
        texture = {LoadTexture(textureURL)};
        originRatio = {2,2};
        spriteSize = oneSpriteSize;
        sheetPos = givenSheetPos;
    }


    void Sprite::spriteTick(){
        float scale = 100.0f;
        if(originRatio.x == 0) originRatio.x = (float)spriteSize.x*scale;
        if(originRatio.y == 0) originRatio.y = (float)spriteSize.y*scale;
        Vector2 currentOrigin = {((float)spriteSize.x*scale)/originRatio.x, ((float)spriteSize.y*scale)/originRatio.y};
        Vector2 changePos = {0.0f, 0.0f};
        Rectangle sourceRec = {
                0.0f + ((float)spriteSize.x * sheetPos.x), 
                (float)spriteSize.x + ((float)spriteSize.x * sheetPos.x), 
                0.0f + ((float)spriteSize.y * sheetPos.y),  
                (float)spriteSize.y + ((float)spriteSize.y * sheetPos.y)
            };

        Rectangle destRec = { currentPos.x, currentPos.y, spriteSize.x*scale , spriteSize.y*scale };
        DrawTexturePro(texture, sourceRec, destRec, currentOrigin, rotation, WHITE);
    }


