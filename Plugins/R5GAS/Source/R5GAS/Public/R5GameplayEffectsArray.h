#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5GameplayEffectsArray.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct R5GAS_API FR5GameplayEffectsArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EffectsGroupName;
    
    FR5GameplayEffectsArray();
};

