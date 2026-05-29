#include "R5AttributeSet.h"
#include "Net/UnrealNetwork.h"

UR5AttributeSet::UR5AttributeSet() {
}

void UR5AttributeSet::OnRep_Vitality(const FGameplayAttributeData& OldVitality) {
}

void UR5AttributeSet::OnRep_TemporalHealth(const FGameplayAttributeData& OldTemporalHealth) {
}

void UR5AttributeSet::OnRep_StaminaRegenRateModifier(const FGameplayAttributeData& OldStaminaRegenRateModifier) {
}

void UR5AttributeSet::OnRep_StaminaRegenRate(const FGameplayAttributeData& OldStaminaRegenRate) {
}

void UR5AttributeSet::OnRep_StaminaConsumptionModifier(const FGameplayAttributeData& OldStaminaConsumptionModifier) {
}

void UR5AttributeSet::OnRep_StaminaConsumptionMeleeModifier(const FGameplayAttributeData& OldStaminaConsumptionMeleeModifier) {
}

void UR5AttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldStamina) {
}

void UR5AttributeSet::OnRep_SecondaryAttackPower(const FGameplayAttributeData& OldAttackPower) {
}

void UR5AttributeSet::OnRep_PassiveHealthRegen(const FGameplayAttributeData& OldPassiveHealthRegen) {
}

void UR5AttributeSet::OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina) {
}

void UR5AttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) {
}

void UR5AttributeSet::OnRep_MaxCorruptionStatus(const FGameplayAttributeData& OldMaxCorruptionStatus) {
}

void UR5AttributeSet::OnRep_MainAttackPower(const FGameplayAttributeData& OldAttackPower) {
}

void UR5AttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) {
}

void UR5AttributeSet::OnRep_DefencePower(const FGameplayAttributeData& OldDefencePower) {
}

void UR5AttributeSet::OnRep_CriticalChanceBase(const FGameplayAttributeData& OldCriticalChanceBase) {
}

void UR5AttributeSet::OnRep_CorruptionStatus(const FGameplayAttributeData& OldCorruptionStatus) {
}

void UR5AttributeSet::OnRep_Armor(const FGameplayAttributeData& OldArmor) {
}

void UR5AttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5AttributeSet, Health);
    DOREPLIFETIME(UR5AttributeSet, TemporalHealth);
    DOREPLIFETIME(UR5AttributeSet, MaxHealth);
    DOREPLIFETIME(UR5AttributeSet, PassiveHealthRegen);
    DOREPLIFETIME(UR5AttributeSet, Stamina);
    DOREPLIFETIME(UR5AttributeSet, MaxStamina);
    DOREPLIFETIME(UR5AttributeSet, StaminaRegenRate);
    DOREPLIFETIME(UR5AttributeSet, StaminaRegenRateModifier);
    DOREPLIFETIME(UR5AttributeSet, StaminaConsumptionModifier);
    DOREPLIFETIME(UR5AttributeSet, StaminaConsumptionMeleeModifier);
    DOREPLIFETIME(UR5AttributeSet, Armor);
    DOREPLIFETIME(UR5AttributeSet, CriticalChanceBase);
    DOREPLIFETIME(UR5AttributeSet, CorruptionStatus);
    DOREPLIFETIME(UR5AttributeSet, MaxCorruptionStatus);
    DOREPLIFETIME(UR5AttributeSet, DefencePower);
    DOREPLIFETIME(UR5AttributeSet, MainAttackPower);
    DOREPLIFETIME(UR5AttributeSet, SecondaryAttackPower);
    DOREPLIFETIME(UR5AttributeSet, Vitality);
}


