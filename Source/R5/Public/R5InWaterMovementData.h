#pragma once
#include "CoreMinimal.h"
#include "R5InWaterMovementData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FR5InWaterMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* InputScale;
    
    R5_API FR5InWaterMovementData();
};

