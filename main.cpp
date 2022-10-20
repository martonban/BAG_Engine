#include "raylib.h"
#include "Sprite.h"

int main(void)
{
    const int screenWidth = 1000;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "UI");

    Sprite sprite;
    sprite.initSprite("Assets/arrow.png",{500.0f, 500.0f}, {2,1});

    SetTargetFPS(60);
    while (!WindowShouldClose()) 
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            sprite.spriteTick();
        EndDrawing();
    }

    CloseWindow();  
    return 0;
}