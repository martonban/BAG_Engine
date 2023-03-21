#include "raylib.h"
#include "Sprite.h"

int main(void)
{

    const int screenWidth = 1920;
    const int screenHeight = 1080;

    InitWindow(screenWidth, screenHeight, "UI");
    Sprite sprite;
    sprite.initSprite("Assets/demosheet.png", {0.f, 0.f});



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