#pragma once

struct Camera3D;

class ModelLoaderAuto;
class FBXLoader;

// 기초적 3D 동작을 하는 클래스.
class Basic3D
{
public:
    // 이 함수는 기초3D화면에 관한 세팅을 하는 함수입니다. 
    Camera3D Basic3DCamSetting();

    // 이 함수는 mainLoop에서 3D를 그려주는걸 선언해주는 함수 입니다.
    void Draw3DStartEnd(Camera3D camera, ModelLoaderAuto& loaderAuto, FBXLoader& fbx_loader);
};