#include "R5NoiseSettings_V0_10_0.h"

FR5NoiseSettings_V0_10_0::FR5NoiseSettings_V0_10_0() {
    this->bEnable = false;
    this->Octaves = 0;
    this->Frequency = 0.00f;
    this->Amplitude = 0.00f;
    this->Offset = 0.00f;
    this->Fractal = ER5NK_FractalType_V0_10_0::fBm;
    this->DomainWarping = 0.00f;
    this->Persistance = 0.00f;
}

