#include "R5NoiseSettings.h"

FR5NoiseSettings::FR5NoiseSettings() {
    this->bEnable = false;
    this->Octaves = 0;
    this->Frequency = 0.00f;
    this->Amplitude = 0.00f;
    this->Offset = 0.00f;
    this->Fractal = ER5NK_FractalType::fBm;
    this->DomainWarping = 0.00f;
    this->Persistance = 0.00f;
}

