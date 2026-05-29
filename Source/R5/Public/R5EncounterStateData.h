#pragma once
#include "CoreMinimal.h"
#include "R5EncounterStateData.generated.h"

class UR5EncounterAction;
class UR5EncounterRequirement;

USTRUCT(BlueprintType)
struct FR5EncounterStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5EncounterRequirement*> Requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5EncounterAction*> Actions;
    
    R5_API FR5EncounterStateData();
};

