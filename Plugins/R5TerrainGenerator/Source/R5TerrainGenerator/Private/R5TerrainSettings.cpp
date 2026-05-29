#include "R5TerrainSettings.h"

UR5TerrainSettings::UR5TerrainSettings() {
    this->bUsePreviewSeed = false;
    this->PreviewSeed = 100000;
    this->BorderSmoothPasses = 2;
    this->BorderSmoothDetail = 4;
    this->WeightDistance = 3.00f;
    this->bFillHoles = false;
    this->ChunkTreshold = 0;
    this->bFilterCrumbs = false;
    this->bKeepMaxChunk = false;
    this->PreviewLayer = ER5TGPreviewLayer::EPL_Heatmap;
    this->bExportHeightmap = true;
    this->bExportWeightmaps = true;
    this->LandscapeMaterialPermutationHash = 0;
}

TArray<FName> UR5TerrainSettings::GetLayerOptions() {
    return TArray<FName>();
}


