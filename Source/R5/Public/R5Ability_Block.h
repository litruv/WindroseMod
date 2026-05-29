#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_Block.generated.h"

class UAbilityTask_PlayMontageAndWait;
class UR5AbilityTask_AnimBlockState;
class UR5BlockCueParams;
class UR5BlockEffectParams;
class UR5BlockGPParams;
class UR5BlockTechParams;

UCLASS(Blueprintable)
class R5_API UR5Ability_Block : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BlockGPParams* GPParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BlockTechParams* TechParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BlockEffectParams* BlockEffectParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BlockCueParams* BlockCueParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_AnimBlockState* AnimBlockStateTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* StartBlockMontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* ImpactMontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* EndBlockMontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* RestartBlockMontageTask;
    
public:
    UR5Ability_Block();

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerBlockStopRequest();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerBlockReactivateRequest();
    
    UFUNCTION(BlueprintCallable)
    void OnRestartMontageFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageInterrupt();
    
    UFUNCTION(BlueprintCallable)
    void OnImpactFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnEndBlockCompleted();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayImpactMontage(FGameplayTag ImpactTag);
    
};

