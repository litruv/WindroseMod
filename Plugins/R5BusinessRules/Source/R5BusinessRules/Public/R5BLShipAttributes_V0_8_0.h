#pragma once
#include "CoreMinimal.h"
#include "R5BLShipAttributes_V0_8_0.generated.h"

class UR5BLShipParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLShipAttributes_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLShipParams> ShipParams;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HealthPercent;
    
    FR5BLShipAttributes_V0_8_0();
};

