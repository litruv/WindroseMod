#pragma once
#include "CoreMinimal.h"
#include "R5ShipSpawnLimit.generated.h"

class AR5ShipPawnBase;

USTRUCT(BlueprintType)
struct FR5ShipSpawnLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxQuantityShipForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AR5ShipPawnBase> ShipClass;
    
    R5_API FR5ShipSpawnLimit();
};

