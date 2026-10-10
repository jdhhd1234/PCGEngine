#include "basic/basic_loop.hpp"
#include "system_3d/system3D.hpp"
#include "PCG_System/assetLoader/asset_loader.hpp"
#include "PCG_System/assetLoader/fbx_loader.hpp"

#include <raylib.h>
#include <iostream>

void MainLoop::mainDraw()
{
    DisableCursor();
    
    SetTargetFPS(60);

    // setting is here
    ModelLoaderAuto loaderAuto;

    /*
    loaderAuto.InitalizeAsset(
        "C:/Users/kym10/Documents/VSCodeProj/PCGEngine/src/asset_test/castle.obj",
        "C:/Users/kym10/Documents/VSCodeProj/PCGEngine/src/asset_test/castle_diffuse.png"
    );
    */

    FBXLoader fbx_loader(
        "C:/Users/kym10/Documents/VSCodeProj/PCGEngine/src/asset_test/fbx_test/Fanal_Laurisilva_Tree_dtre_Raw/Fanal_Laurisilva_Tree_dtre_Raw.fbx"
    );

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

            basic3d.Draw3DStartEnd(camsetting, loaderAuto, fbx_loader);

            // [FOR DEBUG] std::cout << camsetting.position.x << camsetting.position.y << camsetting.position.z;

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // loaderAuto.DisalbeAsset();
}