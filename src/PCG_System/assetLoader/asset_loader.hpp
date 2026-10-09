#pragma once
#include <raylib.h>

class ModelLoaderAuto
{
private:
    Model model;
    Texture2D texture;

public:
    void InitalizeAsset(const char *fileName, const char *fileTexture);
    void DrawAsset(Vector3 position, float scale, Color color);
    void DisalbeAsset();
};