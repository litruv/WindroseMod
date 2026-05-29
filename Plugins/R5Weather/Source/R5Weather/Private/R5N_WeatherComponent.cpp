#include "R5N_WeatherComponent.h"
#include "Net/UnrealNetwork.h"

UR5N_WeatherComponent::UR5N_WeatherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NatureMPC = NULL;
    this->CurrentPresetSettings = NULL;
    this->PresetSettingsSnapshot = NULL;
    this->NextWeatherChangeTime = 0.00f;
    this->CurrentWeatherID = 0;
    this->NextWeatherID = 0;
    this->CheatWeatherID = -1;
    this->SeasonID = 0;
    this->OverrideChangingTime = 0.00f;
    this->OverrideDuration = 0.00f;
}

void UR5N_WeatherComponent::OnRep_CurrentWeatherID() {
}

void UR5N_WeatherComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5N_WeatherComponent, NextWeatherChangeTime);
    DOREPLIFETIME(UR5N_WeatherComponent, CurrentWeatherID);
    DOREPLIFETIME(UR5N_WeatherComponent, NextWeatherID);
    DOREPLIFETIME(UR5N_WeatherComponent, CheatWeatherID);
    DOREPLIFETIME(UR5N_WeatherComponent, SeasonID);
    DOREPLIFETIME(UR5N_WeatherComponent, OverrideChangingTime);
    DOREPLIFETIME(UR5N_WeatherComponent, OverrideDuration);
}


