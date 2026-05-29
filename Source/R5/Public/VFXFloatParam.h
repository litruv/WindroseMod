#pragma once
#include "CoreMinimal.h"
#include "VFXFloatParam.generated.h"

USTRUCT(BlueprintType)
struct FVFXFloatParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    R5_API FVFXFloatParam();
};

