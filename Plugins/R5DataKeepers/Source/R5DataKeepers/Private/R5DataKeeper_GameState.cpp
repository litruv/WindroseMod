#include "R5DataKeeper_GameState.h"
#include "Net/UnrealNetwork.h"

void AR5DataKeeper_GameState::StaticRegisterNativesAR5DataKeeper_GameState()
{
}


AR5DataKeeper_GameState::AR5DataKeeper_GameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AR5DataKeeper_GameState::OnRep_ServerData() {
}

void AR5DataKeeper_GameState::OnRep_IslandId() {
}

void AR5DataKeeper_GameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AR5DataKeeper_GameState, ServerData);
    DOREPLIFETIME(AR5DataKeeper_GameState, islandId);
}


