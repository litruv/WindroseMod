#pragma once
#include "CoreMinimal.h"
#include "R5EncounterRequirement.h"
#include "R5EncounterRequirement_Relevancy.generated.h"

class UR5EncounterRequirement_Timer;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5EncounterRequirement_Relevancy : public UR5EncounterRequirement {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5EncounterRequirement_Timer* Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnybody;
    
public:
    UR5EncounterRequirement_Relevancy();

};

