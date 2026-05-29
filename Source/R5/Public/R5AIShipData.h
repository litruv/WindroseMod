#pragma once
#include "CoreMinimal.h"
#include "R5AIShipDistanceData.h"
#include "R5AIShipHealthLevelData.h"
#include "R5AIShipMovementData.h"
#include "R5AIShipData.generated.h"

USTRUCT(BlueprintType)
struct FR5AIShipData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AIShipDistanceData Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AIShipHealthLevelData HealthLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AIShipMovementData Movement;
    
    R5_API FR5AIShipData();
};

