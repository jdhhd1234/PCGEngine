#pragma once
#include <raylib.h>

class ModelLoaderAuto
{
private:
    Model model;
    Texture2D texture;

public:
    ModelLoaderAuto(const char *fileName, const char *texture2d);
    ~ModelLoaderAuto();

    void LoadModel_Engine();
};