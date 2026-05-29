#pragma once
#include "CoreMinimal.h"
#include "EMovementState.h"
#include "MovementStateData.h"
#include "R5InWaterMovementData.h"
#include "SprintData.h"
#include "MovementData.generated.h"

USTRUCT(BlueprintType)
struct FMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMovementState, FMovementStateData> StateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSprintData SprintData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5InWaterMovementData InWaterMovementData;
    
    R5_API FMovementData();
};

