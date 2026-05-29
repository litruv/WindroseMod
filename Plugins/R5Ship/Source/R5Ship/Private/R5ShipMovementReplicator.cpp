#include "R5ShipMovementReplicator.h"
#include "Net/UnrealNetwork.h"

UR5ShipMovementReplicator::UR5ShipMovementReplicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UR5ShipMovementReplicator::OnRep_MovementState(const FR5ShipMovementState& PrevState) {
}

void UR5ShipMovementReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5ShipMovementReplicator, MovementState);
}


