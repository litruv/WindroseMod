#include "R5SinkingComponent.h"
#include "Net/UnrealNetwork.h"

UR5SinkingComponent::UR5SinkingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SinkingSettings = NULL;
}

void UR5SinkingComponent::OnRep_DeathReason() {
}

void UR5SinkingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5SinkingComponent, DeathReason);
}


