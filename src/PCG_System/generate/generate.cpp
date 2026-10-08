#include "generate.hpp"

#include "../src/system_3d/system3D.hpp"

/*
bool GenerateSystem::DetermineGeneratePosition(Vector3& cameraPos, Vector3 cameraRanges)
{
    // Korean: cameraRanges안에 있으면 생성, cameraRanges밖에 있으면 삭제.
}
*/

Vector3 GenerateSystem::SetRangeCamera(Vector3& cameraPos, float ranges)
{
    // 카메라 위치및 극기초청크 시스탬 설정.
    cameraPos.x += ranges;    
    cameraPos.y += ranges; 
    cameraPos.z += ranges; 

    return cameraPos;
}