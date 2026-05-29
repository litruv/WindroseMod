#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeTask -FallbackName=R5ScenarioGraphNodeTask
#include "R5ScenarioGraphNodeTask.h"
#include "R5ScenarioTask_BoardingAttackersTaskBase.generated.h"

class UR5PassengerManagerComponent;

UCLASS(Abstract, Blueprintable)
class R5_API UR5ScenarioTask_BoardingAttackersTaskBase : public UR5ScenarioGraphNodeTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestedAttackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequestedMemberTag;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PassengerManagerComponent* PassengerManagerComponent;
    
public:
    UR5ScenarioTask_BoardingAttackersTaskBase();

};

