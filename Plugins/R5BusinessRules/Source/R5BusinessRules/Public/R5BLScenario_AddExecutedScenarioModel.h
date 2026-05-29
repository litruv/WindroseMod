#pragma once
#include "CoreMinimal.h"
#include "R5BLScenarioSave_Scenario.h"
#include "R5BLScenario_OwnerInfo.h"
#include "R5BLScenario_AddExecutedScenarioModel.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLScenario_AddExecutedScenarioModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenario_OwnerInfo OwnerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenarioSave_Scenario Scenario;
    
    FR5BLScenario_AddExecutedScenarioModel();
};

