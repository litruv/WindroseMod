#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5AbilityTask_PrepareGameplayAreaForPlayer.generated.h"

class UGameplayAbility;
class UR5AbilityTask_PrepareGameplayAreaForPlayer;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class R5GAS_API UR5AbilityTask_PrepareGameplayAreaForPlayer : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FReadySignature);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadySignature OnReady;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float ActivationTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float MaxHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bUseIntenseOrchestrationProcessing;
    
public:
    UR5AbilityTask_PrepareGameplayAreaForPlayer();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_PrepareGameplayAreaForPlayer* NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FVector& Location);
    
};

