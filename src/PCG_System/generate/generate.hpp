#pragma once
#include <raylib.h>

/*
This Class Role is judgment When Generate Entity/Object.
Determines when entities or objects should be generated.

Korean
즉 PCG에서 지휘관련 한것.
*/
class GenerateSystem
{
public:
    // PCG generation requires the camera position.

    // Korean: 언제 생성하는지. 생성은 안함. 진짜 카메라 좌표 받아서 판단만.
    // bool DetermineGeneratePosition(Vector3& cameraPos, Vector3 cameraRanges);
    
    // Korean: 카메라 기준으로 범위를 생성하는 코드.
    Vector3 SetRangeCamera(Vector3& cameraPos, float ranges);
};