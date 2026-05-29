#pragma once
#include "CoreMinimal.h"
#include "R5BatteryShootLogicData.h"
#include "R5BatteryShootGPData.generated.h"

USTRUCT(BlueprintType)
struct FR5BatteryShootGPData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BatteryShootLogicData LogicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterAimingRadius;
    
    R5_API FR5BatteryShootGPData();
};

