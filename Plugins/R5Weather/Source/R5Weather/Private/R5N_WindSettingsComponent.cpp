#include "R5N_WindSettingsComponent.h"

UR5N_WindSettingsComponent::UR5N_WindSettingsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWindIsDynamic = true;
    this->WindDirectionDeg = 0.00f;
    this->WindSpeed = 100.00f;
    this->bSetByWeather = true;
    this->WindDirectionDegMax = 90.00f;
    this->WindSpeedMin = 100.00f;
    this->WindSpeedMax = 3000.00f;
    this->WindDurationMin = 30.00f;
    this->WindDurationMax = 60.00f;
    this->WindChangingTime = 30.00f;
    this->WindSpeedTerrainMult = 0.00f;
    this->WindMapCoverage = 200000.00f;
}


