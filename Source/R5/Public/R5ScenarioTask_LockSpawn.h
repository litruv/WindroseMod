#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5ScenarioTask_CrewTask.h"
#include "R5ScenarioTask_LockSpawn.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_LockSpawn : public UR5ScenarioTask_CrewTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Block;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CrewmemberType;
    
    UR5ScenarioTask_LockSpawn();

};

