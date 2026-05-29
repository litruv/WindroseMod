#pragma once
#include "CoreMinimal.h"
#include "R5ProjectileFallOffModifier.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FR5ProjectileFallOffModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FallOffModifierCurve;
    
    R5_API FR5ProjectileFallOffModifier();
};

