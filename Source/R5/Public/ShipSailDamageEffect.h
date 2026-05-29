#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ShipSailDamageEffect.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FShipSailDamageEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    R5_API FShipSailDamageEffect();
};

