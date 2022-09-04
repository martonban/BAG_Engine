#include "Scene.h"
#include "raylib.h"
#include "Window.h"
#include "Renderer.h"
#include "Sprite.h"


void Scene::startGame(){
    //Window Dimensions
    const int windowHeight{1080};
    const int windowWidth{1920};
    Window window;
    window.windowInit(windowWidth, windowHeight, "Project Platformer");  

    //Draw Animation
    //Texture2D textrure {LoadTexture()};

    Renderer rederer;
    rederer.rendererInit();

    struct Player
{
    Rectangle rec;
    Vector2 pos; 
};

    

    //Player
    const int width{50};
    const int height{80};

    
    //Camera
    Camera2D camera;
    camera.target = (Vector2){0,0};
    camera.offset = (Vector2){width/2.0f, height/2.0f };
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;
       


    SetTargetFPS(120);
    //Game Lopp
    while(WindowShouldClose() == false){
        BeginDrawing();
        BeginMode2D(camera);
        ClearBackground(WHITE);

        //DrawRectangle(0 , 0, width, height, BLUE);      
        



        
        sprite.initSprite("Assets/demosheet.png", {9,17}, 5.0);
        sprite.drawGrid({0,0});
        //DrawTextureEx(textrure, {0.0, 0.0}, 0.0, 1.0, WHITE);
        


        //Camera Controll
        if(IsKeyDown(KEY_D)){
            camera.target.x += 5.0f;
        }
        if(IsKeyDown(KEY_A)){
            camera.target.x -= 5.0f;
        }

        EndMode2D();

    

        EndDrawing();
    }

    CloseWindow();

}
