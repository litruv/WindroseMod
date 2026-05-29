#pragma once
#include "CoreMinimal.h"
#include "R5DrynessReasonParams.generated.h"

USTRUCT(BlueprintType)
struct FR5DrynessReasonParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DryingMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanResistWetness;
    
    R5_API FR5DrynessReasonParams();
};

