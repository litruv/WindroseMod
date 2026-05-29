#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=ScalableFloat -FallbackName=ScalableFloat
#include "ScalableFloat.h"
#include "R5ReducePassiveReloadRemainingTimeData.generated.h"

USTRUCT(BlueprintType)
struct FR5ReducePassiveReloadRemainingTimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ReduceTimeRatio;
    
    R5_API FR5ReducePassiveReloadRemainingTimeData();
};

