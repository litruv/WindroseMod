#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectSpec -FallbackName=GameplayEffectSpec
#include "GameplayEffectTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_TemporalHealth.generated.h"

class AActor;
class UR5TemporalHealthParams;

UCLASS(Blueprintable)
class R5_API UR5Ability_TemporalHealth : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5TemporalHealthParams* Params;
    
public:
    UR5Ability_TemporalHealth();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageDealt(AActor* TargetActor, float IncomingDamage, float DealtDamage, float ArmorDamageReduction, bool bIsKillDamage, const FGameplayEffectSpec& EffectSpec);
    
};

