#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Math/Rotator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=ActiveGameplayEffectHandle -FallbackName=ActiveGameplayEffectHandle
#include "ActiveGameplayEffectHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetDataHandle -FallbackName=GameplayAbilityTargetDataHandle
#include "Abilities/GameplayAbilityTargetTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_UObjectMemoryKey -FallbackName=R5AS_UObjectMemoryKey
#include "R5AS_UObjectMemoryKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Movement -ObjectName=R5RootMotionByLocationOffsetData -FallbackName=R5RootMotionByLocationOffsetData
#include "R5RootMotionByLocationOffsetData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Movement -ObjectName=RootMotionForwardData -FallbackName=RootMotionForwardData
#include "RootMotionForwardData.h"
#include "ER5AttackType.h"
#include "R5MeleeSectionData.h"
#include "Templates/SubclassOf.h"
#include "R5MeleeAbility.generated.h"

class AActor;
class UAnimMontage;
class UGameplayEffect;
class UR5AbilityTask_ApplyRootMotionForward;
class UR5AbilityTask_NetworkSyncPointWithEventData;
class UR5AbilityTask_WeaponTrace;
class UR5AbilityTask_WeaponTraceDebug;
class UR5MeleeCommonParams;
class UR5MeleeInstanceParams;

UCLASS(Blueprintable)
class R5_API UR5MeleeAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MeleeCommonParams* CommonParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MeleeInstanceParams* InstanceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StartAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_UObjectMemoryKey CurrentTargetSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGamepadRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5MeleeSectionData CurrentSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRootMotionForwardData> RootMotionsToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5RootMotionByLocationOffsetData> RootMotionsByLocationOffsetToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AttackControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HitActorsPerSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SavedDestRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> CostPerAttackGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActiveGameplayEffectHandle> EventGEHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_WeaponTrace* WeaponTraceTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_WeaponTraceDebug* WeaponTraceDebugTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_NetworkSyncPointWithEventData* NetSyncTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_ApplyRootMotionForward* AttackRootMotion;
    
public:
    UR5MeleeAbility();

protected:
    UFUNCTION(BlueprintCallable)
    bool ShouldIgnorePerfectBlock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPerfectBlockMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayNextAttackMontage(UAnimMontage* NextAttackAnimMontage, const FName& SectionName);
    
    UFUNCTION(BlueprintCallable)
    void PerfectBlock();
    
    UFUNCTION(BlueprintCallable)
    void OnNetSyncStartRotation(const FGameplayEventData& EventData);
    
    UFUNCTION(BlueprintCallable)
    void MeleeHit(FGameplayAbilityTargetDataHandle TargetDataHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UGameplayEffect> GetPerfectBlockGE() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetPerfectBlockAnimMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UGameplayEffect> GetMovementBlockGE() const;
    
    UFUNCTION(BlueprintCallable)
    void Combo(ER5AttackType InputType, bool bFromJumpEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPerAttackCost();
    
};

