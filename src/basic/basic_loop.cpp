#include "basic/basic_loop.hpp"
#include "system_3d/system3D.hpp"

#include <raylib.h>
#include <iostream>

void MainLoop::mainDraw()
{
    DisableCursor();
    
    SetTargetFPS(60);

    // setting is here

    // Camera3D
    Camera3D camsetting = basic3d.Basic3DCamSetting();

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        UpdateCamera(&camsetting, CAMERA_FREE);
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            basic3d.Draw3DStartEnd(camsetting);

            std::cout << camsetting.position.x << camsetting.position.y << camsetting.position.z << std::endl;

        EndDrawing();
        //----------------------------------------------------------------------------------
    }
}