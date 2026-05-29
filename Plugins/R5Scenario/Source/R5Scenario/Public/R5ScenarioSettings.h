#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5ScenarioBlackboardDefaults.h"
#include "R5ScenarioScriptInfo.h"
#include "R5ScenarioSettings.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5SCENARIO_API UR5ScenarioSettings : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ScenarioBlackboardDefaults ObjectBlackboardDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ScenarioScriptInfo> Scenarios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CheatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeverChangeGuids;
    
    UR5ScenarioSettings();

};

