#include "Scene.h"
#include "raylib.h"
#include <iostream>

void Sprite::initSprite(const char* textureURL, Vector2 grid, float scale){
    texture = {LoadTexture(textureURL)};
    texture.width *=scale;
    texture.height *=scale;
    gridX = grid.x;
    gridY = grid.y;
}


void Sprite::initSprite(const char* textureURL, Vector2 grid, float scale, Vector2 useGrid){
    texture = {LoadTexture(textureURL)};
    texture.width *=scale;
    texture.height *=scale;
    gridX = grid.x;
    gridY = grid.y;
    needGridX = useGrid.x;
    needGridY = useGrid.y;
}

void Sprite::drawGrid(Vector2 pos){
        SpriteRec sprite; 
        sprite.rec.width = texture.width/gridX;
        sprite.rec.height = texture.height/gridY;
        sprite.pos.x = pos.x;
        sprite.pos.y = pos.y;

        DrawTextureRec(texture, sprite.rec, sprite.pos, WHITE);
}


