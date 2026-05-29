#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectAttributeCaptureDefinition -FallbackName=GameplayEffectAttributeCaptureDefinition
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayModMagnitudeCalculation -FallbackName=GameplayModMagnitudeCalculation
#include "GameplayModMagnitudeCalculation.h"
#include "R5ModMagCalc_MultiplierAttributeBased.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5ModMagCalc_MultiplierAttributeBased : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectAttributeCaptureDefinition CalculationAttributeDef;
    
public:
    UR5ModMagCalc_MultiplierAttributeBased();

};

