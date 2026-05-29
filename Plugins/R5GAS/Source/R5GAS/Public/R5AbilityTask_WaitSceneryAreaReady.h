#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5AbilityTask_WaitSceneryAreaReady.generated.h"

class UGameplayAbility;
class UR5AbilityTask_WaitSceneryAreaReady;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class R5GAS_API UR5AbilityTask_WaitSceneryAreaReady : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FReadySignature);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadySignature OnReady;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float AreaReadyDelay;
    
public:
    UR5AbilityTask_WaitSceneryAreaReady();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_WaitSceneryAreaReady* NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FVector& Location, float Radius, float HalfHeight, float CheckPeriod);
    
};

