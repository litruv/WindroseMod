#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "ER5ScenarioBlackboardType.h"
#include "R5ScenarioGraphNodeCondition.h"
#include "R5ScenarioCondition_BranchByKeyBool.generated.h"

UCLASS(Blueprintable)
class R5SCENARIO_API UR5ScenarioCondition_BranchByKeyBool : public UR5ScenarioGraphNodeCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ScenarioBlackboardType Blackboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MatchAllFlags;
    
    UR5ScenarioCondition_BranchByKeyBool();

};

