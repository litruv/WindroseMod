#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5GrantsGameplayEffectForNearDeathGEData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5GrantsGameplayEffectForNearDeathGEData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GEsToApply;
    
    R5_API FR5GrantsGameplayEffectForNearDeathGEData();
};

