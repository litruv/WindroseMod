#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5BLScenarioSave_BlackboardValue.h"
#include "R5BLScenario_OwnerInfo.h"
#include "R5BLScenario_UpdateValueModel.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLScenario_UpdateValueModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenario_OwnerInfo OwnerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId ScenarioID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPersistant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenarioSave_BlackboardValue Value;
    
    FR5BLScenario_UpdateValueModel();
};

