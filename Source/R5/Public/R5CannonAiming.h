#pragma once
#include "CoreMinimal.h"
#include "R5CannonAiming.generated.h"

class UR5ParabolicMovement;

USTRUCT(BlueprintType)
struct FR5CannonAiming {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ParabolicMovement* ParabolicMovement;
    
public:
    R5_API FR5CannonAiming();
};

