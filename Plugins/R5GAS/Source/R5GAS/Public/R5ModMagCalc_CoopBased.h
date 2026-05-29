#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayModMagnitudeCalculation -FallbackName=GameplayModMagnitudeCalculation
#include "GameplayModMagnitudeCalculation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=ScalableFloat -FallbackName=ScalableFloat
#include "ScalableFloat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=Optional_Float -FallbackName=Optional_Float
#include "Optional_Float.h"
#include "R5ModMagCalc_CoopBased.generated.h"

class UR5WDSFloatParams;

UCLASS(Blueprintable)
class R5GAS_API UR5ModMagCalc_CoopBased : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptional_Float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PlayerCountCurveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5WDSFloatParams* WDSCoopScalingStrengthParameter;
    
public:
    UR5ModMagCalc_CoopBased();

};

