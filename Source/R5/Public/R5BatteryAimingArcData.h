#pragma once
#include "CoreMinimal.h"
#include "R5BatteryAimingArcData.generated.h"

USTRUCT(BlueprintType)
struct FR5BatteryAimingArcData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftWidthMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightWidthMargin;
    
    R5_API FR5BatteryAimingArcData();
};

