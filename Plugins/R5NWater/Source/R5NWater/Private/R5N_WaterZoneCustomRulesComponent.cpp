#include "R5N_WaterZoneCustomRulesComponent.h"

UR5N_WaterZoneCustomRulesComponent::UR5N_WaterZoneCustomRulesComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 0.00f;
    this->bLargeWaveSuppression = false;
    this->MaxMediumWaveWeight = 1.00f;
    this->MaxBreakingWaveWeight = 1.00f;
    this->bApplyBreakingWaveFixedAngle = false;
    this->BreakingWaveFixedAngle = 0.00f;
    this->SuppressionTransient = -1.00f;
}


