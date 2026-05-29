#pragma once
#include "CoreMinimal.h"
#include "R5SetEffects.h"
#include "R5SetCountToEffect.generated.h"

USTRUCT(BlueprintType)
struct FR5SetCountToEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FR5SetEffects> SetCountToEffects;
    
    R5GAS_API FR5SetCountToEffect();
};

