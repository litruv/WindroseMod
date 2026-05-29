#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5TriggerGrantsGameplayEffectData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5TriggerGrantsGameplayEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UGameplayEffect>, int32> GEClassToApplyWithStacks;
    
    R5GAS_API FR5TriggerGrantsGameplayEffectData();
};

