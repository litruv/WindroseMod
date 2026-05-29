#pragma once
#include "CoreMinimal.h"
#include "R5BLScenarioSave_PlayClientNode.h"
#include "R5BLScenario_OwnerInfo.h"
#include "R5BLScenario_PlayClientNodeModel.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLScenario_PlayClientNodeModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenario_OwnerInfo OwnerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenarioSave_PlayClientNode Value;
    
    FR5BLScenario_PlayClientNodeModel();
};

