#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5SetEffects.generated.h"

class UGameplayAbility;
class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5SetEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GrantsGEClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayAbility>> GrantsAbilityClasses;
    
    R5GAS_API FR5SetEffects();
};

