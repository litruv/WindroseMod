#pragma once
#include "CoreMinimal.h"
#include "R5EncounterRequirement.h"
#include "R5EncounterRequirement_Timer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5EncounterRequirement_Timer : public UR5EncounterRequirement {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
public:
    UR5EncounterRequirement_Timer();

};

