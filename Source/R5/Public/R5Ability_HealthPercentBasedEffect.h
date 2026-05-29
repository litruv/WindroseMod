#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_HealthPercentBasedEffect.generated.h"

class UR5HealthPercentBasedEffectParams;

UCLASS(Blueprintable)
class R5_API UR5Ability_HealthPercentBasedEffect : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5HealthPercentBasedEffectParams> EffectParams;
    
public:
    UR5Ability_HealthPercentBasedEffect();

};

