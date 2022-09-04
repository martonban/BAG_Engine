#include "raylib.h"

#ifndef ANIMATEDSPRITE_H
#define ANIMATEDSPRITE_H

class AnimatedSprite{
    public:
        initAnimatedSprite(const char* textureURL, float scale);
        
    private:
        Texture2D texture;
        float scale;
        Vector2 position;
        Rectangle frameRec;
        int currentFrame, framesCounter, framesSpeed;
        
};



#endif