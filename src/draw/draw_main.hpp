#pragma once
#include <random>
#include "camera_engine/cam_eng.hpp"

class DrawMainLoop
{
public:
    void DrwMainLop();

    void RandomDrawCube();

private:
    std::vector<Vector3> cubes;

    CameraEngine3D cameraengine3d;
};