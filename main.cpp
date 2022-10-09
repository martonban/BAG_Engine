#include "raylib.h"
#include "Sprite.h"


int main(void)
{
    const int screenWidth = 1000;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "UI");

    Sprite player;
    player.initSprite({500.0f, 500.0f});

    SetTargetFPS(60);
    while (!WindowShouldClose()) 
    {
        BeginDrawing();

            ClearBackground(RAYWHITE);
            DrawText("Congrats! You created your first window!", 500, 500, 20, LIGHTGRAY);
            player.spriteTick();
        EndDrawing();
    }

    CloseWindow();  
    return 0;
}