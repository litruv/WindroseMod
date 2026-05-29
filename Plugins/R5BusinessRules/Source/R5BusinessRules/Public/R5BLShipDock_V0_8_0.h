#pragma once
#include "CoreMinimal.h"
#include "R5BLShipDock_V0_8_0.generated.h"

class UR5BLShipDockParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLShipDock_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLShipDockParams> ShipDockParams;
    
    FR5BLShipDock_V0_8_0();
};

