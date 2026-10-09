#include "fbx_loader.hpp"
#include <iostream>

void FBXLoader::LoadFBX(const char* filePathName)
{
    scene = ufbx_load_file(filePathName, &opts, &error);

    if (!scene) 
    {
        std::cerr << "FBX Load Fail.." << error.description.data << std::endl;
        exit(1);
    }

    for (ufbx_node *node : scene->nodes) 
    {
        if (node->is_root) continue;

        std::cout << "Object: " << node->name.data << std::endl;

        if (node->mesh)
        {
            std::cout << "-> mesh with %zu faces" << node->mesh->faces.count << std::endl;
            std::cout << "-> mesh " << node->mesh->vertex_position.values.count << std::endl;
        }
    }
}

void FBXLoader::UnloadFBX()
{
    ufbx_free_scene(scene);
}