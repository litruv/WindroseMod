#pragma once
#include "CoreMinimal.h"
#include "ER5BLScenarioSave_BlackboardType.h"
#include "R5BLScenarioSave_BlackboardValue.h"
#include "R5BLScenarioSave_Value.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLScenarioSave_Value {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenarioSave_BlackboardValue Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLScenarioSave_BlackboardType BlackboardType;
    
    FR5BLScenarioSave_Value();
};

