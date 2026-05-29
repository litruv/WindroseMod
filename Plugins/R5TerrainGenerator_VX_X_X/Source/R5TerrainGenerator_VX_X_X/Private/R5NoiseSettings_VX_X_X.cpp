#include "R5NoiseSettings_VX_X_X.h"

FR5NoiseSettings_VX_X_X::FR5NoiseSettings_VX_X_X() {
    this->bEnable = false;
    this->Octaves = 0;
    this->Frequency = 0.00f;
    this->Amplitude = 0.00f;
    this->Offset = 0.00f;
    this->Fractal = ER5NK_FractalType_VX_X_X::fBm;
    this->DomainWarping = 0.00f;
    this->Persistance = 0.00f;
}

