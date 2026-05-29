#include "R5TerrainSettings_V0_9_0.h"

UR5TerrainSettings_V0_9_0::UR5TerrainSettings_V0_9_0() {
    this->bUsePreviewSeed = false;
    this->PreviewSeed = 100000;
    this->BorderSmoothPasses = 2;
    this->BorderSmoothDetail = 4;
    this->WeightDistance = 3.00f;
    this->bFillHoles = false;
    this->ChunkTreshold = 0;
    this->bFilterCrumbs = false;
    this->bKeepMaxChunk = false;
    this->PreviewLayer = ER5TGPreviewLayer_V0_9_0::EPL_Heatmap;
    this->bExportHeightmap = true;
    this->bExportWeightmaps = true;
    this->LandscapeMaterialPermutationHash = 0;
}

TArray<FName> UR5TerrainSettings_V0_9_0::GetLayerOptions() {
    return TArray<FName>();
}


