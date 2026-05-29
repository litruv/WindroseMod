#pragma once
#include "CoreMinimal.h"
#include "R5CommonPlayerEncounterData.h"
#include "R5PlayerEncounterData.generated.h"

class UR5EncounterInstance;

USTRUCT(BlueprintType)
struct FR5PlayerEncounterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CommonPlayerEncounterData CommonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UR5EncounterInstance*> Encounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UR5EncounterInstance*> ActiveEncounters;
    
    R5_API FR5PlayerEncounterData();
};

