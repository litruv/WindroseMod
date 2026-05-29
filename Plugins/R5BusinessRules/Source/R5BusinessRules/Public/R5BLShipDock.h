#pragma once
#include "CoreMinimal.h"
#include "R5BLShipDock.generated.h"

class UR5BLShipDockParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLShipDock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLShipDockParams> ShipDockParams;
    
    FR5BLShipDock();
};

