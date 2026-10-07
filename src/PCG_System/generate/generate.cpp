#include "generate.hpp"

#include "../src/system_3d/system3D.hpp"


bool GenerateSystem::DetermineGeneratePosition(Vector3 cameraPos, Vector3 cameraRanges)
{
    // Korean: 카메라 기준으로 100정도 범위의 영역을 생성한다.
    // Korean_2: cameraRanges안에 있으면 생성, cameraRanges밖에 있으면 삭제.

    if (cameraPos.x && cameraPos.y && cameraPos.z ) 
    {
    
    }
}

Vector3 GenerateSystem::SetRangeCamera(Vector3 cameraRanges, float ranges)
{
    cameraRanges.x += ranges;    
    cameraRanges.y += ranges; 
    cameraRanges.z += ranges; 

    return cameraRanges;
}