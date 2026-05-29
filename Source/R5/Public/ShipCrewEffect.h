#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ShipCrewEffect.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FShipCrewEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    R5_API FShipCrewEffect();
};

