#pragma once
#include "CoreMinimal.h"
#include "R5DepthFishingData.h"
#include "R5DepthLevelFishingData.h"
#include "R5BiomeFishingData.generated.h"

USTRUCT(BlueprintType)
struct FR5BiomeFishingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DepthLevelFishingData DefaultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5DepthFishingData> DepthDataList;
    
    R5_API FR5BiomeFishingData();
};

