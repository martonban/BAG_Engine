#include "raylib.h"
#include "raymath.h"

#ifndef SPRITE_H
#define SPRITE_H
    class Sprite{
       public:
            void initSprite(const char *texturePath, Vector2 spritePos);
            void spriteTick();
        private:
            Vector2 spritePos;
            Texture2D texture;
            Rectangle sourceRec;
            Rectangle destRec;
            Vector2 origin;
    };

#endif