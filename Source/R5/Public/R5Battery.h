#pragma once
#include "CoreMinimal.h"
#include "R5CannonAiming.h"
#include "R5Battery.generated.h"

class UR5BatteryManagerData;
class UR5CannonParams;

USTRUCT(BlueprintType)
struct FR5Battery {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CannonAiming Aiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BatteryManagerData* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CannonParams* CannonParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CannonParams* BallisticsParams;
    
public:
    R5_API FR5Battery();
};

