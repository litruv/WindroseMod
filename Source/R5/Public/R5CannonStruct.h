#pragma once
#include "CoreMinimal.h"
#include "R5CannonAiming.h"
#include "R5CannonStruct.generated.h"

class UR5CannonParams;

USTRUCT(BlueprintType)
struct FR5CannonStruct {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CannonParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CannonAiming Aiming;
    
public:
    R5_API FR5CannonStruct();
};

