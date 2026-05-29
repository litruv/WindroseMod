#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "R5SearchInteractionInRadiusAnglePriority.generated.h"

USTRUCT(BlueprintType)
struct FR5SearchInteractionInRadiusAnglePriority {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval AngleInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PriorityPenalty;
    
    R5_API FR5SearchInteractionInRadiusAnglePriority();
};

