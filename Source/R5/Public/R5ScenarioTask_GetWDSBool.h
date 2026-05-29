#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioTask_GetWDSParameter.h"
#include "R5ScenarioTask_GetWDSBool.generated.h"

class UR5WDSInstancedBool;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_GetWDSBool : public UR5ScenarioTask_GetWDSParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5WDSInstancedBool* BoolParameter;
    
    UR5ScenarioTask_GetWDSBool();

};

