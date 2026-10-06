#pragma once
#include <raylib.h>

class BasicWindow
{
public:

    BasicWindow(const int screenWidth, const int screenHeight)
    {
        InitWindow(screenWidth, screenHeight, "Basic PCG");
    }

    ~BasicWindow()
    {
        CloseWindow();
    }
};