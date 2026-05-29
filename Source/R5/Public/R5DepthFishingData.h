#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "R5DepthLevelFishingData.h"
#include "R5DepthFishingData.generated.h"

USTRUCT(BlueprintType)
struct FR5DepthFishingData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval DepthInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DepthLevelFishingData DepthLevelData;
    
    R5_API FR5DepthFishingData();
};

