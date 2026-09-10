#pragma once
#include <raylib.h>

class BasicWindow
{
public:
    BasicWindow(int width, int height, const char *title)
    {
        InitWindow(width, height, title);

        SetTargetFPS(60);
    }

    ~BasicWindow()
    {
        CloseWindow();
    }
};