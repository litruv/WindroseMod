#include "R5PhysicsLaunchComponent.h"
#include "Net/UnrealNetwork.h"

UR5PhysicsLaunchComponent::UR5PhysicsLaunchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Params = NULL;
    this->ChosenGetUpMontage = NULL;
}

void UR5PhysicsLaunchComponent::OnRep_LaunchState(const FR5LaunchState& PreviousState) {
}

void UR5PhysicsLaunchComponent::OnGetUpMontageFinished(UAnimMontage* Montage, bool bInterrupted) {
}

void UR5PhysicsLaunchComponent::NetMulticastUpdateTransform_Implementation(const TArray<FR5PhysicsLaunchBoneTransform>& BoneLocations) {
}

void UR5PhysicsLaunchComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5PhysicsLaunchComponent, LaunchState);
}


