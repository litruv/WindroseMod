#pragma once
#include "CoreMinimal.h"
#include "R5BLScenario_OwnerInfo.h"
#include "R5BLScenario_ChangeScenarioCrewMaxHeadcountModel.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLScenario_ChangeScenarioCrewMaxHeadcountModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenario_OwnerInfo OwnerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHeadcount;
    
    FR5BLScenario_ChangeScenarioCrewMaxHeadcountModel();
};

