#include "basic/basic_loop.hpp"
#include "system_3d/system3D.hpp"

#include <raylib.h>

void MainLoop::mainDraw()
{
    DisableCursor();
    
    SetTargetFPS(60);

    // setting is here
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

            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }
}