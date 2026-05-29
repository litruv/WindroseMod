#pragma once
#include "CoreMinimal.h"
#include "R5BatteryAimingInputInstanceData.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FR5BatteryAimingInputInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValueToCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationMultiply;
    
    R5_API FR5BatteryAimingInputInstanceData();
};

