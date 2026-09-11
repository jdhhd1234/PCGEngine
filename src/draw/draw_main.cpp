#include "draw_main.hpp"
#include "camera_engine/cam_eng.hpp"

#include <raylib.h>

void DrawMainLoop::RandomDrawCube()
{
    // 시드값을 얻기 위한 random_device 생성.
    std::random_device rd;

    // random_device 를 통해 난수 생성 엔진을 초기화 한다.
    std::mt19937 gen(rd());

    // 0 부터 99 까지 균등하게 나타나는 난수열을 생성하기 위해 균등 분포 정의.
    std::uniform_real_distribution<float> dis(0, 1600);

    Vector3 pos;
    pos.x = dis(gen);
    pos.y = dis(gen);
    pos.z = dis(gen);

    cubes.push_back(pos);

    for (const auto& pos : cubes) 
    {
        DrawCube(pos, 10.0f, 10.0f, 10.0f, BLACK);
    }
}

void DrawMainLoop::DrwMainLop()
{
    Vector3 cubePosition = { 0.0f, 0.0f, 0.0f };

    cameraengine3d.InitCam();

    DisableCursor(); 

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        cameraengine3d.UpdateCam();

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            BeginMode3D(cameraengine3d.GetCamera());

                RandomDrawCube();
                DrawCubeWires(cubePosition, 2.0f, 2.0f, 2.0f, MAROON);

                DrawGrid(1000, 100.0f);

            EndMode3D();

            DrawText("Welcome to the third dimension!", 10, 40, 20, DARKGRAY);

            DrawFPS(10, 10);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }
}