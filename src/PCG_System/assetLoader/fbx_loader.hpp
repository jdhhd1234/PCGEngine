#pragma once
#include "thirdparty/ufbx.h"
#include <vector>

// 여기에 fbx정보를 넣어서 진짜 Mesh싹다 출력하는 코드 작성할꺼임.
struct Vertex 
{
    ufbx_vec3 position;
    ufbx_vec3 normal;
    ufbx_vec2 uv;
};

class FBXLoader
{
private:
    ufbx_load_opts opts = {};
    ufbx_error error;
    ufbx_scene* scene;

    std::vector<Vertex> vertexs;
 
public:
    void LoadFBX(const char* filePathName);
    void UnloadFBX();
};