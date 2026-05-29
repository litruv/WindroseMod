#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectAttributeCaptureDefinition -FallbackName=GameplayEffectAttributeCaptureDefinition
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayModMagnitudeCalculation -FallbackName=GameplayModMagnitudeCalculation
#include "GameplayModMagnitudeCalculation.h"
#include "R5AttributeProgressionData.h"
#include "R5ModMagCalc_HeroAttributeLinear.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5ModMagCalc_HeroAttributeLinear : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectAttributeCaptureDefinition CalculationAttributeDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AttributeProgressionData FormulaConfig;
    
    UR5ModMagCalc_HeroAttributeLinear();

};

