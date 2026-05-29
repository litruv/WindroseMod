#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5AbilityTask_DetectEnemyNearby.generated.h"

class UGameplayAbility;
class UR5AbilityTask_DetectEnemyNearby;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_DetectEnemyNearby : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegateSignature);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateSignature OnEnemyDetected;
    
    UR5AbilityTask_DetectEnemyNearby();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_DetectEnemyNearby* NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, float UpdateTimerRate, float DistanceLimit, FGameplayTagContainer CharFsmMarkers);
    
};

