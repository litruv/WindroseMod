#include "R5N_DayCycleTimeComponent.h"
#include "Net/UnrealNetwork.h"

UR5N_DayCycleTimeComponent::UR5N_DayCycleTimeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WorldDayTime = 0.00f;
    this->DayCycleSpeedInv = 1.00f;
}

float UR5N_DayCycleTimeComponent::GetPartOfNight() const {
    return 0.0f;
}

FVector3f UR5N_DayCycleTimeComponent::GetPartOfDayPart() const {
    return FVector3f{};
}

float UR5N_DayCycleTimeComponent::GetPartOfDay() const {
    return 0.0f;
}

float UR5N_DayCycleTimeComponent::GetNormalizedDayTime() const {
    return 0.0f;
}

float UR5N_DayCycleTimeComponent::GetCurrentTimeInHours() const {
    return 0.0f;
}

UR5N_DayCycleTimeComponent* UR5N_DayCycleTimeComponent::Get(const UObject* Wco) {
    return NULL;
}

void UR5N_DayCycleTimeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5N_DayCycleTimeComponent, WorldDayTime);
    DOREPLIFETIME(UR5N_DayCycleTimeComponent, DayCycleSpeedInv);
}


