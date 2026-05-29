#pragma once
#include "CoreMinimal.h"
#include "R5BurnSailData.generated.h"

USTRUCT(BlueprintType)
struct FR5BurnSailData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    R5_API FR5BurnSailData();
};

