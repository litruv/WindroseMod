#pragma once
#include "CoreMinimal.h"
#include "R5BLScenario_OwnerInfo.h"
#include "R5BLScenario_ClearClientNodeModel.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLScenario_ClearClientNodeModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenario_OwnerInfo OwnerInfo;
    
    FR5BLScenario_ClearClientNodeModel();
};

