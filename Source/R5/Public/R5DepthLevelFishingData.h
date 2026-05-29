#pragma once
#include "CoreMinimal.h"
#include "R5DepthLevelFishingData.generated.h"

class UR5FishingCatchTableParams;

USTRUCT(BlueprintType)
struct FR5DepthLevelFishingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5FishingCatchTableParams* FishingCatchTableParams;
    
    R5_API FR5DepthLevelFishingData();
};

