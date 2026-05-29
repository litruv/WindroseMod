#include "R5N_WaterMutableSettings.h"

UR5N_WaterMutableSettings::UR5N_WaterMutableSettings() {
    this->LargeWaveSpectrumAmplitude = 2.00f;
    this->LargeWavePeakEnhance = 3.00f;
    this->LargeWaveSpreadBlend = 0.90f;
    this->LargeWaveSwell = 1.00f;
    this->CoastlineFoamScale = 1.00f;
    this->ResultWindMetersPerSecMin = 0.10f;
    this->ResultWindMetersPerSecMax = 10.00f;
    this->WindScale = 1.00f;
}


