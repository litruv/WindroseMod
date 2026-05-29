#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5ScenarioCrewSettings_Job.h"
#include "R5ScenarioCrewSettings_Jobs.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5ScenarioCrewSettings_Jobs : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ScenarioCrewSettings_Job> Jobs;
    
    UR5ScenarioCrewSettings_Jobs();

};

