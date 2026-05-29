#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioTask_GetWDSParameter.h"
#include "R5ScenarioTask_GetWDSTag.generated.h"

class UR5WDSInstancedTag;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_GetWDSTag : public UR5ScenarioTask_GetWDSParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5WDSInstancedTag* TagParameter;
    
    UR5ScenarioTask_GetWDSTag();

};

