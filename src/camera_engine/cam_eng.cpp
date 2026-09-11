#include "cam_eng.hpp"
#include <iostream>

void CameraEngine3D::InitCam()
{
    camera.position = Vector3{ 0.0f, 10.0f, 10.0f };  // Camera position
    camera.target = Vector3{ 0.0f, 0.0f, 0.0f };      // Camera looking at point
    camera.up = Vector3{ 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
    camera.fovy = 45.0f;                                // Camera field-of-view Y
    camera.projection = CAMERA_PERSPECTIVE;             // Camera mode type
}

void CameraEngine3D::UpdateCam()
{
    // 일단 임시로 Player Position이랑 Camera랑 같게 한다.
    UpdateCamera(&camera, CAMERA_FREE);
}