#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttribute -FallbackName=GameplayAttribute
#include "AttributeSet.h"
#include "R5BaseDamageCalculation.h"
#include "R5ShipLeakDamageCalculator.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class R5_API UR5ShipLeakDamageCalculator : public UR5BaseDamageCalculation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayAttribute, FFloatInterval> TargetAttributeBasedDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* OptionalStackingEffectCurve;
    
    UR5ShipLeakDamageCalculator();

};

