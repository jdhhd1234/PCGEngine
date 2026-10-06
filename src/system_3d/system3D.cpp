#include "system_3d/system3D.hpp"

#include <raylib.h>

void Basic3D::Draw3DStartEnd(Camera3D camera)
{
    BeginMode3D(camera);

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