#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectSpec -FallbackName=GameplayEffectSpec
#include "GameplayEffectTypes.h"
#include "R5AT_Battery_SalvoHitCounter.generated.h"

class AActor;

UCLASS(Blueprintable)
class R5_API UR5AT_Battery_SalvoHitCounter : public UAbilityTask {
    GENERATED_BODY()
public:
    UR5AT_Battery_SalvoHitCounter();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageDealt(AActor* TargetActor, float IncomingDamage, float DealtDamage, float ArmorDamageReduction, bool bIsKillDamage, const FGameplayEffectSpec& EffectSpec);
    
};

