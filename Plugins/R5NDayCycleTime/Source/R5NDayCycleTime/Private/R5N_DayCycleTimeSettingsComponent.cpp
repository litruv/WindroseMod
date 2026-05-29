#include "R5N_DayCycleTimeSettingsComponent.h"

UR5N_DayCycleTimeSettingsComponent::UR5N_DayCycleTimeSettingsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PartOfDay = 0.00f;
    this->PartOfNight = 0.00f;
    this->SunLightAngle = 0.00f;
    this->MoonLightAngle = 0.00f;
    this->bDynamicDayTime = true;
    this->StartDayTime = 14.00f;
    this->DayDuration = 3300.00f;
    this->NightDuration = 800.00f;
    this->PartNightToMidnight = 0.50f;
    this->MorningPartOfDay = 0.20f;
    this->EveningPartOfDay = 0.25f;
}


