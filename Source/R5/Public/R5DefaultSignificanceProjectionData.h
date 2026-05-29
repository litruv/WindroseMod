#pragma once
#include "CoreMinimal.h"
#include "R5DefaultSignificanceProjectionData.generated.h"

USTRUCT(BlueprintType)
struct FR5DefaultSignificanceProjectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenSizeLimit;
    
    R5_API FR5DefaultSignificanceProjectionData();
};

