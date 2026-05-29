#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5ConsumableEffect.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct R5INVENTORY_API FR5ConsumableEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveIfInterrupt;
    
    FR5ConsumableEffect();
};

