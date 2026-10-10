#include "system_3d/system3D.hpp"
#include "./PCG_System/assetLoader/asset_loader.hpp"
#include "./PCG_System/assetLoader/fbx_loader.hpp"

#include <raylib.h>
#include <raymath.h>

void Basic3D::Draw3DStartEnd(Camera3D camera, ModelLoaderAuto& loaderAuto, FBXLoader& fbx_loader)
{
    Material defaultMaterial = LoadMaterialDefault();
    defaultMaterial.maps[MATERIAL_MAP_DIFFUSE].color = RED; // 붉은색 큐브

    Matrix rotation = MatrixRotateY((float)GetTime());
    Matrix translation = MatrixTranslate(0.0f, 0.0f, 0.0f);
    Matrix transform = MatrixMultiply(rotation, translation);

    BeginMode3D(camera);
    
        // loaderAuto.DrawAsset({0.0f, 0.0f, 0.0f}, 1.0f, WHITE);
        DrawMesh(fbx_loader.CreateFBX(), defaultMaterial, transform);
        DrawGrid(1000, 10.0f);

    EndMode3D();
}

Camera3D Basic3D::Basic3DCamSetting()
{
    // Define the camera to look into our 3d world
    Camera3D camera = { 0 };
    camera.position = Vector3{ 10.0f, 10.0f, 10.0f }; // Camera position
    camera.target = Vector3{ 0.0f, 0.0f, 0.0f };      // Camera looking at point
    camera.up = Vector3{ 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
    camera.fovy = 45.0f;                                // Camera field-of-view Y
    camera.projection = CAMERA_PERSPECTIVE;             // Camera projection type

    return camera;
}