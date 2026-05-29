#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioTask_GetWDSParameter.h"
#include "R5ScenarioTask_GetWDSFloat.generated.h"

class UR5WDSInstancedFloat;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_GetWDSFloat : public UR5ScenarioTask_GetWDSParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5WDSInstancedFloat* FloatParameter;
    
    UR5ScenarioTask_GetWDSFloat();

};

