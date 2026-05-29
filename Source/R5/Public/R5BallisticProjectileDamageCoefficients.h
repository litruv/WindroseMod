#pragma once
#include "CoreMinimal.h"
#include "R5BallisticProjectileDamageCoefficients.generated.h"

USTRUCT(BlueprintType)
struct FR5BallisticProjectileDamageCoefficients {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PenetratedDamageCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotPenetratedDamageCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RicochetDamageCoef;
    
    R5_API FR5BallisticProjectileDamageCoefficients();
};

