#include "R5N_WaterSettings.h"

UR5N_WaterSettings::UR5N_WaterSettings() {
    this->LargeWaveSpectrumAmplitude = 2.00f;
    this->LargeWavePeakEnhance = 3.00f;
    this->LargeWaveSpreadBlend = 0.90f;
    this->LargeWaveSwell = 1.00f;
    this->LargeWaveFetchKM = 100.00f;
    this->FarWindAngleDeg = 0.00f;
    this->FarWindSpeed = 2.00f;
    this->FetchKM = 100.00f;
    this->Depth = 40.00f;
    this->Gravity = 9.81f;
    this->OceanFoamFadeRate = 0.60f;
    this->OceanFoamCoverage = 0.38f;
    this->OceanFoamLevel = 0.50f;
    this->OceanMediumFadeDistMin = 5.00f;
    this->OceanMediumFadeDistMax = 30.00f;
    this->OceanLargeFadeDistMin = 100.00f;
    this->OceanLargeFadeDistMax = 400.00f;
    this->CoastlineFoamFactorOnTheGround = 1.00f;
    this->CoastlineFlowVectorStrength = 1.00f;
    this->CoastlineSimplification = 20;
    this->EdgeTolerance = 0.01f;
    this->EdgeSmoothingRadius = 20;
    this->LandFillThreshold = 0.35f;
    this->MinIslandSizeForBreakingWavesMeters = 5.00f;
    this->MaxWaveAmplitudeMeters = 40.00f;
    this->UnderwaterGeometryDisplayThresholdMeters = 0.40f;
    this->MaxChoppyOffsetsMeters = 4.00f;
    this->MorphRatio = 0.22f;
    this->RangeScale = 1.80f;
    this->StartMorphRangeMeters = 6.00f;
    this->GridExtentMeters = 700.00f;
    this->MaxZDistanceMeters = 1000.00f;
    this->NumLODs = 8;
    this->MinFOVDeg = 10.00f;
    this->MaxFOVDeg = 180.00f;
    this->CameraLargeFadeDistMin = 200.00f;
    this->CameraLargeFadeDistMax = 250.00f;
    this->CameraLargeFadeContextFactor = 1.50f;
    this->CameraLargeFadeContextMin = 50.00f;
    this->CameraLargeFadeContextMax = 100.00f;
    this->InteractionMaxObjectSpeed = 110.00f;
    this->InteractionObjectSpeedFactor = 0.50f;
    this->WaterLevelMeters = 0.00f;
}


