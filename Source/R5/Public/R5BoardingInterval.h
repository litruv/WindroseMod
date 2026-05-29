#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Buoyancy -ObjectName=ER5ShipSide -FallbackName=ER5ShipSide
#include "ER5ShipSide.h"
#include "R5BoardingInterval.generated.h"

USTRUCT(BlueprintType)
struct FR5BoardingInterval {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ShipSide Side;
    
    R5_API FR5BoardingInterval();
};

