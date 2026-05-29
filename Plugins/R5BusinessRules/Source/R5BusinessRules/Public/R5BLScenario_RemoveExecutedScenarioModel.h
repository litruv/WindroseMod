#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5BLScenario_OwnerInfo.h"
#include "R5BLScenario_RemoveExecutedScenarioModel.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLScenario_RemoveExecutedScenarioModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenario_OwnerInfo OwnerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId ScenarioID;
    
    FR5BLScenario_RemoveExecutedScenarioModel();
};

