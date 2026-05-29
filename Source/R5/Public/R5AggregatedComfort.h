#pragma once
#include "CoreMinimal.h"
#include "R5AggregatedComfort.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5AggregatedComfort {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Comfort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxComfort;
    
    FR5AggregatedComfort();
};

