#include "R5PartyComponent.h"
#include "Net/UnrealNetwork.h"

UR5PartyComponent::UR5PartyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PartyId = -1;
}

void UR5PartyComponent::OnRep_PartyId() {
}

void UR5PartyComponent::JoinToParty(int32 InPartyId) {
}

int32 UR5PartyComponent::GetPartyId() const {
    return 0;
}

UR5PartyComponent* UR5PartyComponent::GetPartyComponent(AActor* TargetActor) {
    return NULL;
}

void UR5PartyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5PartyComponent, PartyId);
}


