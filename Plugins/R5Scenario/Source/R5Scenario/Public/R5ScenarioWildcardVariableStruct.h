#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLScenarioSave_BlackboardContainerType -FallbackName=ER5BLScenarioSave_BlackboardContainerType
#include "ER5BLScenarioSave_BlackboardContainerType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLScenarioSave_BlackboardValueType -FallbackName=ER5BLScenarioSave_BlackboardValueType
#include "ER5BLScenarioSave_BlackboardValueType.h"
#include "R5ScenarioWildcardVariableStruct.generated.h"

USTRUCT(BlueprintType)
struct R5SCENARIO_API FR5ScenarioWildcardVariableStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLScenarioSave_BlackboardValueType ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLScenarioSave_BlackboardContainerType ContainerType;
    
    FR5ScenarioWildcardVariableStruct();
};

