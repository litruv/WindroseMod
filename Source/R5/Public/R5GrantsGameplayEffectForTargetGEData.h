#pragma once
#include "CoreMinimal.h"
#include "R5GrantsGameplayEffectForTargetIntervalToGE.h"
#include "R5GrantsGameplayEffectForTargetGEData.generated.h"

USTRUCT(BlueprintType)
struct FR5GrantsGameplayEffectForTargetGEData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5GrantsGameplayEffectForTargetIntervalToGE> GEsForTargetNum;
    
    R5_API FR5GrantsGameplayEffectForTargetGEData();
};

