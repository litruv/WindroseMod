#pragma once
#include "CoreMinimal.h"
#include "R5AIStartStopBounds.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5AIStartStopBounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopDistance;
    
    FR5AIStartStopBounds();
};

