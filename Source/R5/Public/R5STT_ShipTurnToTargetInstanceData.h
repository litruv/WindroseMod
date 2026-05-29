#pragma once
#include "CoreMinimal.h"
#include "R5STT_ShipTurnToBaseInstanceData.h"
#include "R5STT_ShipTurnToTargetInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5STT_ShipTurnToTargetInstanceData : public FR5STT_ShipTurnToBaseInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    FR5STT_ShipTurnToTargetInstanceData();
};

