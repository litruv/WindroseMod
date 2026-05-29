#include "R5AbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"

UR5AbilitySystemComponent::UR5AbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilitySystemParams = NULL;
}

void UR5AbilitySystemComponent::ServerSetReplicatedEventWithEventData_Implementation(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FGameplayEventData EventData, int32 AdditionalKey) {
}

void UR5AbilitySystemComponent::R5GetGameplayEffectStackInfo(FActiveGameplayEffectHandle ActiveHandle, int32& CurrentStacks, int32& MaxStacks) {
}

void UR5AbilitySystemComponent::R5GetGameplayEffectLevelInfo(FActiveGameplayEffectHandle ActiveHandle, int32& CurrentLevel) {
}

void UR5AbilitySystemComponent::R5GetGameplayEffectDurationInfo(FActiveGameplayEffectHandle ActiveHandle, float& RemainingDuration, float& TotalDuration) {
}

void UR5AbilitySystemComponent::R5ClientEndAbility_Implementation(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo) {
}

void UR5AbilitySystemComponent::R5ClientCancelAbility_Implementation(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo) {
}

void UR5AbilitySystemComponent::NetMulticastUnreliableHandleGameplayEvent_Implementation(FGameplayTag EventTag) {
}

void UR5AbilitySystemComponent::NetMulticast_InvokeGameplayCues_FromBatchData_Implementation(const FR5GameplayCueBatchData& BatchData) {
}

void UR5AbilitySystemComponent::MontageJumpToSectionOwningClient(FName InSectionName) {
}

void UR5AbilitySystemComponent::K2_GetCooldownRemainingTime(const FGameplayTagContainer CooldownConsumableAbilityTags, float& CooldownDurationTime, float& CooldownRemainingTime) {
}

bool UR5AbilitySystemComponent::HasAbility(const FGameplayTag& Tag) {
    return false;
}

float UR5AbilitySystemComponent::GetSumSimpleAttributes(const FGameplayTagContainer& AttributeTags) const {
    return 0.0f;
}

float UR5AbilitySystemComponent::GetSimpleAttribute(FGameplayTag AttributeTag) const {
    return 0.0f;
}

FR5ReplicatedMarkerStatusEffectArray UR5AbilitySystemComponent::GetReplicatedMarkerStatusEffectsArray() const {
    return FR5ReplicatedMarkerStatusEffectArray{};
}

TArray<FR5ReplicatedMarkerStatusEffect> UR5AbilitySystemComponent::GetReplicatedMarkerStatusEffects() const {
    return TArray<FR5ReplicatedMarkerStatusEffect>();
}

float UR5AbilitySystemComponent::GetDependFloat(const FR5DependOnSimpleAttributeFloat& DependFloat) {
    return 0.0f;
}

void UR5AbilitySystemComponent::ClientSetReplicatedEventWithEventData_Implementation(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayEventData EventData, int32 AdditionalKey) {
}

void UR5AbilitySystemComponent::ClientMontageJumpToSection_Implementation(FName InSectionName) {
}

void UR5AbilitySystemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5AbilitySystemComponent, ReplicatedSimpleAttributes);
    DOREPLIFETIME(UR5AbilitySystemComponent, ReplicatedMarkerStatusEffects);
}


