#ifndef Window_CLASS_H
#define Window_CLASS_H

#include "raylib.h"

class Window {
    public:
    
    int height;
    int width;

    //Létrehozzuk az ablakot, majd azt visszaaddjuk
    void windowInit(int width, int height, const char *title);
};

#endif