#include "basic/basic_window.hpp"
#include "basic/basic_loop.hpp"

#include "PCG_System/assetLoader/fbx_loader.hpp"

int main() 
{
    //BasicWindow basic_window(1270, 720);

    //MainLoop mainLoop;
    //mainLoop.mainDraw();

    FBXLoader fbx_loader;
    fbx_loader.LoadFBX(
        "C:/Users/kym10/Documents/VSCodeProj/PCGEngine/src/asset_test/fbx_test/Fanal_Laurisilva_Tree_dtre_Raw/Fanal_Laurisilva_Tree_dtre_Raw.fbx"
    );

    fbx_loader.UnloadFBX();
    
    return 0;
}