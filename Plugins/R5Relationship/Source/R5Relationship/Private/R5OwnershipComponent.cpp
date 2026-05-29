#include "R5OwnershipComponent.h"
#include "Net/UnrealNetwork.h"

UR5OwnershipComponent::UR5OwnershipComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldUseOwnerFaction = true;
}

void UR5OwnershipComponent::OnRep_OwnerId() {
}

void UR5OwnershipComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5OwnershipComponent, OwnerId);
}


