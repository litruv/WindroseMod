#include "R5N_WeatherInfluenceStatusComponent.h"
#include "Net/UnrealNetwork.h"

UR5N_WeatherInfluenceStatusComponent::UR5N_WeatherInfluenceStatusComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWetnessCheck = false;
    this->bWindCloseCheck = false;
    this->bWet = false;
    this->bOnWind = false;
}

void UR5N_WeatherInfluenceStatusComponent::OnRep_Wet() {
}

void UR5N_WeatherInfluenceStatusComponent::OnRep_OnWind() {
}

FGameplayTagContainer UR5N_WeatherInfluenceStatusComponent::GetStatusTags() {
    return FGameplayTagContainer{};
}

void UR5N_WeatherInfluenceStatusComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5N_WeatherInfluenceStatusComponent, bWet);
    DOREPLIFETIME(UR5N_WeatherInfluenceStatusComponent, bOnWind);
}


