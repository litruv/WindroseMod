#include "WaterZoneCustomRules.h"

FWaterZoneCustomRules::FWaterZoneCustomRules() {
    this->Radius = 0.00f;
    this->bLargeWaveSuppression = false;
    this->MaxMediumWaveWeight = 0.00f;
    this->MaxBreakingWaveWeight = 0.00f;
    this->bApplyBreakingWaveFixedAngle = false;
    this->BreakingWaveFixedAngle = 0.00f;
    this->SuppressionTransient = 0.00f;
}

