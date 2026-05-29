#pragma once
#include "CoreMinimal.h"
#include "ER5BobberMovementState.h"
#include "R5BobberCosmeticData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FR5BobberCosmeticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5BobberMovementState, UCurveFloat*> StateScaleCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingPitch;
    
    R5_API FR5BobberCosmeticData();
};

