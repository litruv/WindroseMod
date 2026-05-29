#include "GCFSMReplicationComponent.h"
#include "Net/UnrealNetwork.h"

UGCFSMReplicationComponent::UGCFSMReplicationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->deferProxyInitialization = false;
}

void UGCFSMReplicationComponent::OnRep_ActiveFSMs() {
}

void UGCFSMReplicationComponent::MulticastUpdateFSM_Implementation(const TArray<FName>& fsmPathName, FName exitEvent, const FGuid& activeStateGuid) {
}

void UGCFSMReplicationComponent::MulticastStopFSM_Implementation(const TArray<FName>& fsmPathName, FName exitEvent) {
}

void UGCFSMReplicationComponent::FinalizeProxyInitialization() {
}

void UGCFSMReplicationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGCFSMReplicationComponent, activeFSMs);
}


