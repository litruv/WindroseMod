#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectExecutionCalculation -FallbackName=GameplayEffectExecutionCalculation
#include "GameplayEffectExecutionCalculation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5CombatPowerCalculationSettings.h"
#include "R5BaseDamageCalculation.generated.h"

class UR5OneShotResistParams;

UCLASS(Abstract, Blueprintable)
class R5_API UR5BaseDamageCalculation : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CombatPowerCalculationSettings CombatPowerCalculationSettings;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CalculatorDamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5OneShotResistParams* OneShotResistParams;
    
public:
    UR5BaseDamageCalculation();

};

