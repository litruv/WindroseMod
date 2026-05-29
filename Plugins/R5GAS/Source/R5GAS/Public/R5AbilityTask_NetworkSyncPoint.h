#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5AbilityTask_NetworkSyncPoint.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5AbilityTask_NetworkSyncPoint : public UAbilityTask {
    GENERATED_BODY()
public:
    UR5AbilityTask_NetworkSyncPoint();

    UFUNCTION(BlueprintCallable)
    void OnSignalCallback();
    
};

