#pragma once
#include "CoreMinimal.h"
#include "R5BLAdditionalFalloffModifier.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLAdditionalFalloffModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> FallOffModifierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveMultiplier;
    
    FR5BLAdditionalFalloffModifier();
};

