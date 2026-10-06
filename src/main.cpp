#include "basic/basic_window.hpp"
#include "basic/basic_loop.hpp"

int main() 
{
    BasicWindow basic_window(1270, 720);

    MainLoop mainLoop;
    mainLoop.mainDraw();
    
    return 0;
}