#include "R5ShipAttributeSet.h"
#include "Net/UnrealNetwork.h"

UR5ShipAttributeSet::UR5ShipAttributeSet() {
}

void UR5ShipAttributeSet::OnRep_SightingTimeModifier(const FGameplayAttributeData& InSightingTimeModifier) {
}

void UR5ShipAttributeSet::OnRep_SightingDisturbanceCoefficientModifier(const FGameplayAttributeData& InSightingDisturbanceCoefficientModifier) {
}

void UR5ShipAttributeSet::OnRep_SightingDisturbanceByShotModifier(const FGameplayAttributeData& InSightingDisturbanceByShotModifier) {
}

void UR5ShipAttributeSet::OnRep_ShotRangeMinDistanceModifier(const FGameplayAttributeData& InShotRangeMinDistanceModifier) {
}

void UR5ShipAttributeSet::OnRep_ShotRangeMaxDistanceModifier(const FGameplayAttributeData& InShotRangeMaxDistanceModifier) {
}

void UR5ShipAttributeSet::OnRep_ScatterModifier(const FGameplayAttributeData& InScatterModifier) {
}

void UR5ShipAttributeSet::OnRep_SailMaxHealth(const FGameplayAttributeData& InSailMaxHealth) {
}

void UR5ShipAttributeSet::OnRep_SailHealthRegen(const FGameplayAttributeData& InSailHealthRegen) {
}

void UR5ShipAttributeSet::OnRep_SailHealth(const FGameplayAttributeData& InSailHealth) {
}

void UR5ShipAttributeSet::OnRep_ReloadModifier(const FGameplayAttributeData& InReloadModifier) {
}

void UR5ShipAttributeSet::OnRep_OuterAimingRadiusModifier(const FGameplayAttributeData& InOuterAimingRadiusModifier) {
}

void UR5ShipAttributeSet::OnRep_MotorPowerMultiplier(const FGameplayAttributeData& InMotorPowerMultiplier) {
}

void UR5ShipAttributeSet::OnRep_MotorPowerLossModifier() {
}

void UR5ShipAttributeSet::OnRep_MotorPowerGainModifier(const FGameplayAttributeData& InMotorPowerGainModifier) {
}

void UR5ShipAttributeSet::OnRep_InnerAimingRadiusModifier(const FGameplayAttributeData& InInnerAimingRadiusModifier) {
}

void UR5ShipAttributeSet::OnRep_HullThicknessArmorModifier(const FGameplayAttributeData& InHullThicknessArmorModifier) {
}

void UR5ShipAttributeSet::OnRep_HullThicknessArmor(const FGameplayAttributeData& InHullThicknessArmor) {
}

void UR5ShipAttributeSet::OnRep_EnergyBurnOutOfCombatModifier(const FGameplayAttributeData& InEnergyBurnOutOfCombat) {
}

void UR5ShipAttributeSet::OnRep_EnergyBurnInCombatModifier(const FGameplayAttributeData& InEnergyBurnInCombat) {
}

void UR5ShipAttributeSet::OnRep_EnergyBurnAbortModifier(const FGameplayAttributeData& InEnergyBurnAbort) {
}

void UR5ShipAttributeSet::OnRep_EnergyAccumulationModifier(const FGameplayAttributeData& InEnergyAccumulation) {
}

void UR5ShipAttributeSet::OnRep_BoostMinEnergyToStartModifier(const FGameplayAttributeData& InBoostMinEnergyToStart) {
}

void UR5ShipAttributeSet::OnRep_BoostMaxEnergy(const FGameplayAttributeData& InBoostMaxEnergy) {
}

void UR5ShipAttributeSet::OnRep_BoostCurrentEnergy(const FGameplayAttributeData& InBoostCurrentEnergy) {
}

void UR5ShipAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5ShipAttributeSet, BoostMaxEnergy);
    DOREPLIFETIME(UR5ShipAttributeSet, BoostMinEnergyToStartModifier);
    DOREPLIFETIME(UR5ShipAttributeSet, MotorPowerGainModifier);
    DOREPLIFETIME(UR5ShipAttributeSet, MotorPowerLossModifier);
    DOREPLIFETIME(UR5ShipAttributeSet, BoostCurrentEnergy);
    DOREPLIFETIME(UR5ShipAttributeSet, EnergyBurnInCombatModifier);
    DOREPLIFETIME(UR5ShipAttributeSet, EnergyBurnOutOfCombatModifier);
    DOREPLIFETIME(UR5ShipAttributeSet, EnergyBurnAbortModifier);
    DOREPLIFETIME(UR5ShipAttributeSet, EnergyAccumulationModifier);
    DOREPLIFETIME(UR5ShipAttributeSet, MotorPowerMultiplier);
    DOREPLIFETIME(UR5ShipAttributeSet, InnerAimingRadiusModifier);
    DOREPLIFETIME(UR5ShipAttributeSet, OuterAimingRadiusModifier);
    DOREPLIFETIME(UR5ShipAttributeSet, SightingTimeModifier);
    DOREPLIFETIME(UR5ShipAttributeSet, SightingDisturbanceCoefficientModifier);
    DOREPLIFETIME(UR5ShipAttributeSet, SightingDisturbanceByShotModifier);
    DOREPLIFETIME(UR5ShipAttributeSet, ShotRangeMinDistanceModifier);
    DOREPLIFETIME(UR5ShipAttributeSet, ShotRangeMaxDistanceModifier);
    DOREPLIFETIME(UR5ShipAttributeSet, ScatterModifier);
    DOREPLIFETIME(UR5ShipAttributeSet, ReloadModifier);
    DOREPLIFETIME(UR5ShipAttributeSet, HullThicknessArmor);
    DOREPLIFETIME(UR5ShipAttributeSet, HullThicknessArmorModifier);
    DOREPLIFETIME(UR5ShipAttributeSet, SailMaxHealth);
    DOREPLIFETIME(UR5ShipAttributeSet, SailHealth);
    DOREPLIFETIME(UR5ShipAttributeSet, SailHealthRegen);
}


