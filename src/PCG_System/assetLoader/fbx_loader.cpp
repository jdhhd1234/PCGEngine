#include "fbx_loader.hpp"
#include <iostream>
#include <raylib.h>

Vertex FBXLoader::FBX_Mesh()
{
    Vertex vertex;

    Mesh mesh = { 0 };

    for (size_t i = 0; i < scene->meshes.count; ++i)
    {
        ufbx_mesh* mesh = scene->meshes.data[i];
        std::cout << "메쉬 이름: " << mesh->name.data << std::endl;

        for (vertex.vertexCount_j = 0; vertex.vertexCount_j < mesh->vertex_indices.count; ++vertex.vertexCount_j)
        {
            size_t vertex_idx = mesh->vertex_indices.data[vertex.vertexCount_j];

            vertex.position = mesh->vertices.data[vertex_idx];

            if (mesh->vertex_normal.exists)
            {
                vertex.normal = ufbx_get_vertex_vec3(&mesh->vertex_normal, vertex.vertexCount_j);
            }

            if (mesh->vertex_uv.exists)
            {
                vertex.uv = ufbx_get_vertex_vec2(&mesh->vertex_uv, vertex.vertexCount_j);
            }

            /*
                Vertex [4082] - Pos: (-2.16898, -0.0315676, -0.149831)
                Vertex [4083] - Pos: (-2.17542, -0.0301657, -0.205362)
                Vertex [4084] - Pos: (-2.1924, -0.0306743, -0.220761)
                Vertex [4085] - Pos: (-2.18567, -0.0302584, -0.19563)

            std::cout << "  Vertex [" << j << "] - Pos: (" 
                      << vertex.position.x << ", " << vertex.position.y << ", " << vertex.position.z << ")\n";
            */
        }
    }

    return vertex;
}

// This Function is Raylib Mesh Know ufbx information.
// Korean: 이 함수의 역할은 ufbx정보를 Raylib에 넘겨주는역할이다.
Mesh FBXLoader::CreateFBX()
{
    Vertex vertex_;

    Mesh mesh = { 0 };
    mesh.vertexCount = vertex_.vertexCount_j;

    mesh.vertices = (float *)MemAlloc(mesh.vertexCount * 3 * sizeof(float));
    
    for (size_t vertex_i = 0; vertex_i < vertex_.vertexCount_j; ++vertex_i)
    {
        mesh.vertices[vertex_i] = vertex_.position.x;
        mesh.vertices[vertex_i + 1] = vertex_.position.y;
        mesh.vertices[vertex_i + 2] = vertex_.position.z;
    }

    UploadMesh(&mesh, false);

    return mesh;
}