#pragma once
#include "CoreMinimal.h"
#include "ER5EncounterActionStatus.h"
#include "R5EncounterCustomData.h"
#include "R5EncounterActionCustomData.generated.h"

UCLASS(Blueprintable)
class UR5EncounterActionCustomData : public UR5EncounterCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5EncounterActionStatus Status;
    
    UR5EncounterActionCustomData();

};

