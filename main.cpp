#include "raylib.h"
#include "Sprite.h"

int main(void)
{

    const int screenWidth = 1000;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "UI");
    Sprite sprite;
    sprite.initSprite("Assets/demosheet.png", {400.0f, 300.0f}, {32.0f, 32.0f}, {0.0f, 0.f});



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