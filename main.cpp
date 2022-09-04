#include "raylib.h"
#include "Scene.h"
#include "GameData.h"


int main(){
    Scene scene;
    GameData gamedata;
    gamedata.initGameData();   
    scene.startGame();

}