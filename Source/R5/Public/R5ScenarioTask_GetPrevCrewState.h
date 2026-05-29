#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5ScenarioTask_CrewTask.h"
#include "R5ScenarioTask_GetPrevCrewState.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_GetPrevCrewState : public UR5ScenarioTask_CrewTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PrevStateTag;
    
    UR5ScenarioTask_GetPrevCrewState();

};

