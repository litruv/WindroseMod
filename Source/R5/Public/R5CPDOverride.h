#pragma once
#include "CoreMinimal.h"
#include "R5CPDOverrideScalar.h"
#include "R5CPDOverride.generated.h"

USTRUCT(BlueprintType)
struct FR5CPDOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5CPDOverrideScalar> Scalars;
    
    R5_API FR5CPDOverride();
};

