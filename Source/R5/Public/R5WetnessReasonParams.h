#pragma once
#include "CoreMinimal.h"
#include "R5WetnessReasonParams.generated.h"

USTRUCT(BlueprintType)
struct FR5WetnessReasonParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppearedInfluenceDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WettingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoresWetnessResistance;
    
    R5_API FR5WetnessReasonParams();
};

