#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttribute -FallbackName=GameplayAttribute
#include "AttributeSet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayModMagnitudeCalculation -FallbackName=GameplayModMagnitudeCalculation
#include "GameplayModMagnitudeCalculation.h"
#include "R5ModMagCalc_SumModifiers.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5ModMagCalc_SumModifiers : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAttribute> ModifierAttributes;
    
    UR5ModMagCalc_SumModifiers();

};

