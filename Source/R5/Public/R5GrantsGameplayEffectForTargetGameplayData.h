#pragma once
#include "CoreMinimal.h"
#include "R5GrantsGameplayEffectForTargetGameplayData.generated.h"

USTRUCT(BlueprintType)
struct FR5GrantsGameplayEffectForTargetGameplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToReapply;
    
    R5_API FR5GrantsGameplayEffectForTargetGameplayData();
};

