#include "PCG_System/assetLoader/asset_loader.hpp"

#include <raylib.h>

void ModelLoaderAuto::InitalizeAsset(const char *fileName, const char *fileTexture)
{
    model = LoadModel(fileName);
    texture = LoadTexture(fileTexture);

    model.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = texture;            // Set map diffuse texture
}

void ModelLoaderAuto::DrawAsset(Vector3 position, float scale, Color color)
{
    DrawModel(model, position, scale, color);        // Draw 3d model with texture
}

void ModelLoaderAuto::DisalbeAsset()
{
    UnloadTexture(texture);
    UnloadModel(model);
}