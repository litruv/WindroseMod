#include "R5ShipRudderComponent.h"
#include "Net/UnrealNetwork.h"

UR5ShipRudderComponent::UR5ShipRudderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ControlSettings = NULL;
    this->ServiceMotorPowerCurveOverride = NULL;
    this->RudderAngleFactorCurveOverride = NULL;
    this->ShipModelSettings = NULL;
    this->RudderInput = ERudderInput::None;
    this->ReplicatedRudderAngle = 0;
}

void UR5ShipRudderComponent::OnRep_ReplicatedRudderAngle() {
}

void UR5ShipRudderComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5ShipRudderComponent, RudderInput);
    DOREPLIFETIME(UR5ShipRudderComponent, ReplicatedRudderAngle);
}


