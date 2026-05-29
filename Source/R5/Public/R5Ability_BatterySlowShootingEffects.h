#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "Templates/SubclassOf.h"
#include "R5Ability_BatterySlowShootingEffects.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class R5_API UR5Ability_BatterySlowShootingEffects : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> EffectsToApply;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double EffectDelay;
    
public:
    UR5Ability_BatterySlowShootingEffects();

};

