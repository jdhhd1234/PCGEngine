#include "basic/basic_loop.hpp"
#include "system_3d/system3D.hpp"
#include "PCG_System/assetLoader/asset_loader.hpp"

#include <raylib.h>
#include <iostream>

void MainLoop::mainDraw()
{
    DisableCursor();
    
    SetTargetFPS(60);

    // setting is here
    ModelLoaderAuto loaderAuto;

    loaderAuto.InitalizeAsset("../asset_test/asset_source/Ship_06_Open_Sails.obj","../asset_test/asset_source/T_Ship06_BarrelMetal_01_Diffuse.jpg");

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

            basic3d.Draw3DStartEnd(camsetting, loaderAuto);

            std::cout << camsetting.position.x << camsetting.position.y << camsetting.position.z << std::endl;

        EndDrawing();
        //----------------------------------------------------------------------------------
    }
}