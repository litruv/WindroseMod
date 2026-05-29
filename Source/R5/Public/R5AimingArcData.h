#pragma once
#include "CoreMinimal.h"
#include "R5AimingArcData.generated.h"

USTRUCT(BlueprintType)
struct FR5AimingArcData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingEndWidthScale;
    
    R5_API FR5AimingArcData();
};

