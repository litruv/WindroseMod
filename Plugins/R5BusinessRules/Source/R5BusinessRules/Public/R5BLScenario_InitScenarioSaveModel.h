#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5BLScenarioSave_Blackboard.h"
#include "R5BLScenarioSave_Scenario.h"
#include "R5BLScenario_OwnerInfo.h"
#include "R5BLScenario_InitScenarioSaveModel.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLScenario_InitScenarioSaveModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenario_OwnerInfo OwnerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId ExecutorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenarioSave_Blackboard ExecutorBlackboardDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLScenarioSave_Scenario> DefaultScenarios;
    
    FR5BLScenario_InitScenarioSaveModel();
};

