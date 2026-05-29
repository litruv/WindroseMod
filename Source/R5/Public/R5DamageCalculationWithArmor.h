#pragma once
#include "CoreMinimal.h"
#include "R5BaseDamageCalculation.h"
#include "R5DamageCalculationWithArmor.generated.h"

UCLASS(Blueprintable)
class R5_API UR5DamageCalculationWithArmor : public UR5BaseDamageCalculation {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuaranteedDamageCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraArmorMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorRatioUpperCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorRatioLowerCoefficient;
    
public:
    UR5DamageCalculationWithArmor();

};

