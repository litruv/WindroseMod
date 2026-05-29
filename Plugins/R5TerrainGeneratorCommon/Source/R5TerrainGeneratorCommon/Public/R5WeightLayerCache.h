#pragma once
#include "CoreMinimal.h"
#include "R5WeightLayerCache.generated.h"

USTRUCT(BlueprintType)
struct FR5WeightLayerCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Weights;
    
    R5TERRAINGENERATORCOMMON_API FR5WeightLayerCache();
};

