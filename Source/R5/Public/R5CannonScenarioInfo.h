#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Buoyancy -ObjectName=ER5ShipSide -FallbackName=ER5ShipSide
#include "ER5ShipSide.h"
#include "R5CannonScenarioInfo.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5CannonScenarioInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ShipSide ShipSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CannonScenarioIndex;
    
    FR5CannonScenarioInfo();
};

