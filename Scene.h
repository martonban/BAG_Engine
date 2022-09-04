#include "raylib.h"
#include "Window.h"
#include "Sprite.h"

class Scene{
    public:
        void startGame();
    private:
        Camera2D camera;
        Window window;
        Sprite sprite;

};  