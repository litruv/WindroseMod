#include "R5LandscapeContactsComponent.h"
#include "Net/UnrealNetwork.h"

UR5LandscapeContactsComponent::UR5LandscapeContactsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Settings = NULL;
    this->StrandingState = EStrandingState::Free;
}

void UR5LandscapeContactsComponent::OnRep_StrandingState(const EStrandingState& OldStrandingState) {
}

void UR5LandscapeContactsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5LandscapeContactsComponent, StrandingState);
}


