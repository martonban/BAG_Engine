#include "Sprite.h"

void Sprite::initSprite(const char *texturePath, Vector2 spritePos){
    texture = LoadTexture(texturePath);
    spritePos = spritePos;


    float scale = 0.3;
    // Define Origin
    origin = {((float)texture.width*scale)/2, ((float)texture.height*scale)/2};

    sourceRec = {0.0f, 0.0f, (float)texture.width, (float)texture.height};
    destRec = { spritePos.x, spritePos.y, (float)texture.width, (float)texture.height};

}   


void Sprite::spriteTick(){
    DrawTexturePro(texture, sourceRec, destRec, origin, 0.0f, WHITE);
}

