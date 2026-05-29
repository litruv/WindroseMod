#pragma once
#include "CoreMinimal.h"
#include "R5STC_FloatRatioInstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STC_FloatRatioInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dividend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Divisor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Ratio;
    
    FR5STC_FloatRatioInstanceData();
};

