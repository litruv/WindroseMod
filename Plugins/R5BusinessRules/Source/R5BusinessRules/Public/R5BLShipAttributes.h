#pragma once
#include "CoreMinimal.h"
#include "R5BLShipAttributes.generated.h"

class UR5BLShipParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLShipAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLShipParams> ShipParams;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HealthPercent;
    
    FR5BLShipAttributes();
};

