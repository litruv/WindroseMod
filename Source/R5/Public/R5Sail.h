#pragma once
#include "CoreMinimal.h"
#include "R5Sail.generated.h"

class UR5ShipSailParams;

USTRUCT(BlueprintType)
struct FR5Sail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipSailParams* Params;
    
    R5_API FR5Sail();
};

