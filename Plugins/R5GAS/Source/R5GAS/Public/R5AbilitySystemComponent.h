#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilitySystemComponent -FallbackName=AbilitySystemComponent
#include "AbilitySystemComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=ActiveGameplayEffectHandle -FallbackName=ActiveGameplayEffectHandle
#include "ActiveGameplayEffectHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=EAbilityGenericReplicatedEvent -FallbackName=EAbilityGenericReplicatedEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityActivationInfo -FallbackName=GameplayAbilityActivationInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilitySpecHandle -FallbackName=GameplayAbilitySpecHandle
#include "GameplayAbilitySpec.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectSpec -FallbackName=GameplayEffectSpec
#include "GameplayEffectTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=PredictionKey -FallbackName=PredictionKey
#include "GameplayPrediction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5AbilitySystemCueReplicationInterface.h"
#include "R5DependOnSimpleAttributeFloat.h"
#include "R5GameplayCueBatchData.h"
#include "R5PendingEventKey.h"
#include "R5PendingEventValue.h"
#include "R5ReplicatedMarkerStatusEffect.h"
#include "R5ReplicatedMarkerStatusEffectArray.h"
#include "R5ReplicatedSimpleAttributeArray.h"
#include "R5AbilitySystemComponent.generated.h"

class AActor;
class UR5AbilitySystemParams;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5GAS_API UR5AbilitySystemComponent : public UAbilitySystemComponent, public IR5AbilitySystemCueReplicationInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnMarkerStatusEffectUpdated, FActiveGameplayEffectHandle, GEHandleToUpdate, int32, NewStackCount, float, NewServerStartTime, float, NewDuration);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMarkerStatusEffectRemoved, FActiveGameplayEffectHandle, GEHandleToRemove);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMarkerStatusEffectAdded, const FR5ReplicatedMarkerStatusEffect&, StatusEffect);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnDamageDealt, AActor*, TargetActor, float, IncomingDamage, float, DealtDamage, float, ArmorDamageReduction, bool, bIsKillDamage, const FGameplayEffectSpec&, EffectSpec);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageDealt OnDamageDealt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarkerStatusEffectAdded OnMarkerStatusEffectAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarkerStatusEffectUpdated OnMarkerStatusEffectUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarkerStatusEffectRemoved OnMarkerStatusEffectRemoved;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilitySystemParams* AbilitySystemParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FR5ReplicatedSimpleAttributeArray ReplicatedSimpleAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FR5ReplicatedMarkerStatusEffectArray ReplicatedMarkerStatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FR5PendingEventKey, FR5PendingEventValue> PendingEventPayloads;
    
public:
    UR5AbilitySystemComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(Reliable, Server)
    void ServerSetReplicatedEventWithEventData(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FGameplayEventData EventData, int32 AdditionalKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void R5GetGameplayEffectStackInfo(FActiveGameplayEffectHandle ActiveHandle, int32& CurrentStacks, int32& MaxStacks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void R5GetGameplayEffectLevelInfo(FActiveGameplayEffectHandle ActiveHandle, int32& CurrentLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void R5GetGameplayEffectDurationInfo(FActiveGameplayEffectHandle ActiveHandle, float& RemainingDuration, float& TotalDuration);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void R5ClientEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void R5ClientCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticastUnreliableHandleGameplayEvent(FGameplayTag EventTag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCues_FromBatchData(const FR5GameplayCueBatchData& BatchData);
    
    UFUNCTION(BlueprintCallable)
    void MontageJumpToSectionOwningClient(FName InSectionName);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetCooldownRemainingTime(const FGameplayTagContainer CooldownConsumableAbilityTags, float& CooldownDurationTime, float& CooldownRemainingTime);
    
    UFUNCTION(BlueprintCallable)
    bool HasAbility(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSumSimpleAttributes(const FGameplayTagContainer& AttributeTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSimpleAttribute(FGameplayTag AttributeTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5ReplicatedMarkerStatusEffectArray GetReplicatedMarkerStatusEffectsArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5ReplicatedMarkerStatusEffect> GetReplicatedMarkerStatusEffects() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDependFloat(const FR5DependOnSimpleAttributeFloat& DependFloat);
    
    UFUNCTION(Client, Reliable)
    void ClientSetReplicatedEventWithEventData(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayEventData EventData, int32 AdditionalKey);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientMontageJumpToSection(FName InSectionName);
    

    // Fix for true pure virtual functions not being implemented
};

