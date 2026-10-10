#pragma once
#include "thirdparty/ufbx.h"
#include <vector>
#include <iostream>
#include <raylib.h>

// 여기에 fbx정보를 넣어서 진짜 Mesh싹다 출력하는 코드 작성할꺼임.
struct Vertex
{
    ufbx_vec3 position;
    ufbx_vec3 normal;
    ufbx_vec2 uv;

    size_t vertexCount_j;
};

class FBXLoader
{
private:
    ufbx_load_opts opts = {};
    ufbx_error error;
    ufbx_scene* scene;

    std::vector<Vertex> vertexs;
 
public:
    FBXLoader(const char* fbx_path)
    {
        scene = ufbx_load_file(fbx_path, &opts, &error);

        if (!scene)
        {
            std::cerr << "[ERROR] FBX Load Fail..." << std::endl;
            exit(1);
        }
    }

    ~FBXLoader()
    {
        ufbx_free_scene(scene);
    }

    // extract fbx position
    Vertex FBX_Mesh();

    Mesh CreateFBX();
};