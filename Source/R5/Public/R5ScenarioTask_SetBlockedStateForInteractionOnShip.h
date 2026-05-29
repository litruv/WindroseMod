#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "GameplayTagContainer.h"
#include "R5ScenarioTask_ShipTask.h"
#include "R5ScenarioTask_SetBlockedStateForInteractionOnShip.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_SetBlockedStateForInteractionOnShip : public UR5ScenarioTask_ShipTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlock;
    
    UR5ScenarioTask_SetBlockedStateForInteractionOnShip();

};

