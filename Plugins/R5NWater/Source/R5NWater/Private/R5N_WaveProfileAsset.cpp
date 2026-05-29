#include "R5N_WaveProfileAsset.h"

UR5N_WaveProfileAsset::UR5N_WaveProfileAsset() {
    this->TimeScale = 0.30f;
    this->AnimationSpeedScale = 1.00f;
    this->DistanceToStartAnimation = 10.00f;
    this->PeriodSin = 60.00f;
    this->AmplitudeSin = 6.00f;
    this->PeriodCos = 20.00f;
    this->AmplitudeCos = 4.00f;
    this->NoisePower = 0.40f;
    this->NoiseGrainScale = 0.17f;
    this->NumSamplesPerFrame = 0;
    this->NumSamplesAlongFrames = 0;
}


