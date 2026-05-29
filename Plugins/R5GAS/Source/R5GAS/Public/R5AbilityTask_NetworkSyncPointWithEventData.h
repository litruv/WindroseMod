#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
#include "R5AbilityTask_NetworkSyncPointWithEventData.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5AbilityTask_NetworkSyncPointWithEventData : public UAbilityTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEventData EventData;
    
public:
    UR5AbilityTask_NetworkSyncPointWithEventData();

};

