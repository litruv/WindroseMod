#include "R5N_AirComponent.h"
#include "Net/UnrealNetwork.h"

UR5N_AirComponent::UR5N_AirComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UR5N_AirComponent::UpdateWindMap() {
}

FVector UR5N_AirComponent::GetMainWindDirection() const {
    return FVector{};
}

FVector UR5N_AirComponent::GetFlowVector(const FVector& Location) const {
    return FVector{};
}

UR5N_AirComponent* UR5N_AirComponent::Get(const UObject* Wco) {
    return NULL;
}

void UR5N_AirComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5N_AirComponent, CurrentWind);
    DOREPLIFETIME(UR5N_AirComponent, NextWind);
}


