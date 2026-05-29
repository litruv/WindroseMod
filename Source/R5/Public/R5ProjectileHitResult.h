#pragma once
#include "CoreMinimal.h"
#include "R5ProjectileHitResult.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FR5ProjectileHitResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* FlyTrajectory;
    
    R5_API FR5ProjectileHitResult();
};

