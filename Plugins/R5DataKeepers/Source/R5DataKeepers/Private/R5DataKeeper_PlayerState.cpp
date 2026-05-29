#include "R5DataKeeper_PlayerState.h"
#include "Net/UnrealNetwork.h"

void AR5DataKeeper_PlayerState::StaticRegisterNativesAR5DataKeeper_PlayerState()
{
}


AR5DataKeeper_PlayerState::AR5DataKeeper_PlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AR5DataKeeper_PlayerState::OnRep_AccountId() {
}

void AR5DataKeeper_PlayerState::ClientIsReady_Implementation() {
}

void AR5DataKeeper_PlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AR5DataKeeper_PlayerState, AccountData);
}


