#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "ER5ScenarioScriptUsageType.h"
#include "R5ScenarioBlackboardDefaults.h"
#include "R5ScenarioScriptInfo.generated.h"

class UR5ScenarioGraph;

USTRUCT(BlueprintType)
struct FR5ScenarioScriptInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId ScenarioID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ScenarioScriptUsageType UsageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UR5ScenarioGraph> GraphClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ScenarioBlackboardDefaults LocalBlackboardDefaults;
    
    R5SCENARIO_API FR5ScenarioScriptInfo();
};

