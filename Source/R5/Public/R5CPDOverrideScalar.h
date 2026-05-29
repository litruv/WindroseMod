#pragma once
#include "CoreMinimal.h"
#include "R5CPDOverrideScalar.generated.h"

USTRUCT(BlueprintType)
struct FR5CPDOverrideScalar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    R5_API FR5CPDOverrideScalar();
};

