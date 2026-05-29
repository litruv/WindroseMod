#include "R5ShipMotorComponent.h"
#include "Net/UnrealNetwork.h"

UR5ShipMotorComponent::UR5ShipMotorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MotorPowerMultiplierCurve = NULL;
    this->MotorPowerCurveOverride = NULL;
    this->SlowdownForceMagnitudeCurveOverride = NULL;
    this->ShipModelSettings = NULL;
    this->CurrentGear = 0;
    this->bIsBoostAvailable = false;
    this->bIsBoostActive = false;
}

void UR5ShipMotorComponent::OnRep_CurrentGear() {
}

void UR5ShipMotorComponent::OnRep_BoostActive() const {
}

void UR5ShipMotorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5ShipMotorComponent, CurrentGear);
    DOREPLIFETIME(UR5ShipMotorComponent, bIsBoostAvailable);
    DOREPLIFETIME(UR5ShipMotorComponent, bIsBoostActive);
}


