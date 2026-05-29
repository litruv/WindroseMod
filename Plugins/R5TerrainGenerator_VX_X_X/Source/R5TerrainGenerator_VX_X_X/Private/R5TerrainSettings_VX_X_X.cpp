#include "R5TerrainSettings_VX_X_X.h"

UR5TerrainSettings_VX_X_X::UR5TerrainSettings_VX_X_X() {
    this->bUsePreviewSeed = false;
    this->PreviewSeed = 100000;
    this->BorderSmoothPasses = 2;
    this->BorderSmoothDetail = 4;
    this->WeightDistance = 3.00f;
    this->bFillHoles = false;
    this->ChunkTreshold = 0;
    this->bFilterCrumbs = false;
    this->bKeepMaxChunk = false;
    this->PreviewLayer = ER5TGPreviewLayer_VX_X_X::EPL_Heatmap;
    this->bExportHeightmap = true;
    this->bExportWeightmaps = true;
    this->LandscapeMaterialPermutationHash = 0;
}

TArray<FName> UR5TerrainSettings_VX_X_X::GetLayerOptions() {
    return TArray<FName>();
}


