#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=ScalableFloat -FallbackName=ScalableFloat
#include "ScalableFloat.h"
#include "R5ModMagCalc_SumModifiers.h"
#include "R5ModMagCalc_ProportionalStaminaConsumption.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5ModMagCalc_ProportionalStaminaConsumption : public UR5ModMagCalc_SumModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PercentStaminaConsumption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AbsoluteStaminaConsumption;
    
    UR5ModMagCalc_ProportionalStaminaConsumption();

};

