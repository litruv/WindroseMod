#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Math/Rotator.h"
#include "R5SetRotationRateStateTreeTaskInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FR5SetRotationRateStateTreeTaskInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationRate;
    
    R5_API FR5SetRotationRateStateTreeTaskInstanceData();
};

