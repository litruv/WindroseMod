#pragma once
#include "CoreMinimal.h"
#include "R5NPhysCollisionLimitsToResetPower.generated.h"

USTRUCT(BlueprintType)
struct R5NPHYS_API FR5NPhysCollisionLimitsToResetPower {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrictionImpulse;
    
    FR5NPhysCollisionLimitsToResetPower();
};

