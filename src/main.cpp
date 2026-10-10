#include "basic/basic_window.hpp"
#include "basic/basic_loop.hpp"

#include "PCG_System/assetLoader/fbx_loader.hpp"

int main() 
{
    BasicWindow basic_window(1270, 720);

    MainLoop mainLoop;
    mainLoop.mainDraw();
    
    return 0;
}