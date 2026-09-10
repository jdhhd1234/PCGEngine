#include "raylib.h"
#include "basewin/baseWin.hpp"
#include "draw/draw_main.hpp"

int main() 
{
    BasicWindow basicwindow(1000, 700, "RaylibTest");

    DrawMainLoop drawMainLoop;
    drawMainLoop.DrwMainLop();
    
    return 0;
}
