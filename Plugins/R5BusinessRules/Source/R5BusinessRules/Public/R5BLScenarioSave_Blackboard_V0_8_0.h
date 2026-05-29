#pragma once
#include "CoreMinimal.h"
#include "R5BLScenarioSave_BlackboardValue_V0_8_0.h"
#include "R5BLScenarioSave_Blackboard_V0_8_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLScenarioSave_Blackboard_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLScenarioSave_BlackboardValue_V0_8_0> PersistantBlackboard;
    
    FR5BLScenarioSave_Blackboard_V0_8_0();
};

