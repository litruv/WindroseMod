#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordPath -FallbackName=R5BLRecordPath
#include "R5BLRecordPath.h"
#include "R5BLShip_UpdateHealth.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLShip_UpdateHealth {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordPath ShipAttributesPath;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NewHealthPercent;
    
    FR5BLShip_UpdateHealth();
};

