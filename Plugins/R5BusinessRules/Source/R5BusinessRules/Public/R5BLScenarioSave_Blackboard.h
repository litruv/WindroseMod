#pragma once
#include "CoreMinimal.h"
#include "R5BLScenarioSave_BlackboardValue.h"
#include "R5BLScenarioSave_Blackboard.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLScenarioSave_Blackboard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLScenarioSave_BlackboardValue> PersistantBlackboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLScenarioSave_BlackboardValue> TransientBlackboard;
    
    FR5BLScenarioSave_Blackboard();
};

