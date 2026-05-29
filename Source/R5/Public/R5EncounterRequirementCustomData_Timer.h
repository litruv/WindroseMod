#pragma once
#include "CoreMinimal.h"
#include "R5EncounterRequirementCustomData.h"
#include "R5EncounterRequirementCustomData_Timer.generated.h"

UCLASS(Blueprintable)
class UR5EncounterRequirementCustomData_Timer : public UR5EncounterRequirementCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<float> StartTimerTime;
    
    UR5EncounterRequirementCustomData_Timer();

};

