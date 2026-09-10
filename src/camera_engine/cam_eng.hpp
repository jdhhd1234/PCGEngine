#pragma once
#include <raylib.h>


struct PositionCube
{
    Vector3 cubePosition;
};


class CameraEngine3D
{
public:
    void InitCam();
    void UpdateCam();

    Camera3D GetCamera() const 
    {
        return camera;
    }

private:
    Camera3D camera{};

    PositionCube positioncube;
};