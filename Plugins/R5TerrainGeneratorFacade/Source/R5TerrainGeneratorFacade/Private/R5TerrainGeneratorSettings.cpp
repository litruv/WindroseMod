#include "R5TerrainGeneratorSettings.h"

UR5TerrainGeneratorSettings::UR5TerrainGeneratorSettings() {
    this->MinFogHeight = 0.00f;
    this->MaxFogHeight = 4000.00f;
    this->BiomeTags.AddDefaulted(6);
    this->SubBiomeNames.AddDefaulted(15);
    this->BiomeTransitionLengthMeters = 15.00f;
    this->NegativeHeightThresholdMeters = 0.00f;
    this->PositiveHeightThresholdMeters = 4.00f;
    this->FlatnessThresholdMeters = 1.00f;
    this->MaxCircleDeviationPixels = 6;
    this->CircleRadiusOffsetPixels = 8;
    this->BlurStrength = 1.00f;
}


