#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5GameplayEffectWithLevel.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5GameplayEffectWithLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    R5_API FR5GameplayEffectWithLevel();
};

