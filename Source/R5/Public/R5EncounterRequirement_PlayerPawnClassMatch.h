#pragma once
#include "CoreMinimal.h"
#include "R5EncounterRequirement.h"
#include "R5EncounterRequirement_PlayerPawnClassMatch.generated.h"

class APawn;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5EncounterRequirement_PlayerPawnClassMatch : public UR5EncounterRequirement {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<APawn>> PawnClasses;
    
public:
    UR5EncounterRequirement_PlayerPawnClassMatch();

};

