#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Math/Rotator.h"
#include "R5BatteryAimingCursor.generated.h"

USTRUCT(BlueprintType)
struct FR5BatteryAimingCursor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TargetRelativeRotation;
    
    R5_API FR5BatteryAimingCursor();
};

