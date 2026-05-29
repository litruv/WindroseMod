#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5ApplyGameplayEffectOnCrewStateChanged_Effects.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5ApplyGameplayEffectOnCrewStateChanged_Effects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GEClasses;
    
    R5_API FR5ApplyGameplayEffectOnCrewStateChanged_Effects();
};

