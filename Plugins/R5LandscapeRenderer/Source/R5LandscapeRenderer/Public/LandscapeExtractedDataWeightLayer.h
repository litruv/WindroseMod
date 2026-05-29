#pragma once
#include "CoreMinimal.h"
#include "LandscapeExtractedDataWeightLayer.generated.h"

USTRUCT(BlueprintType)
struct R5LANDSCAPERENDERER_API FLandscapeExtractedDataWeightLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Weights;
    
    FLandscapeExtractedDataWeightLayer();
};

