#include "R5N_WeatherSettingsComponent.h"
#include "R5N_WindSettingsComponent.h"

UR5N_WeatherSettingsComponent::UR5N_WeatherSettingsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeatherParams = NULL;
    this->WeatherSeasons = NULL;
    this->CurrentPresetDurationTime = 20.00f;
    this->InDoorBlend = 0.00f;
    this->bShowDebugMessage = false;
    this->bShowProbabilitySlots = false;
    this->bShowWeatherPresetProbability = false;
    this->bUseDefaultWeatherInEditor = true;
    this->OverrideWeatherPreset = NULL;
    this->bShowInGameDebugArrow = false;
    this->WindSettings = CreateDefaultSubobject<UR5N_WindSettingsComponent>(TEXT("R5WindSettings"));
}


