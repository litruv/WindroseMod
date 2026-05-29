#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectSpec -FallbackName=GameplayEffectSpec
#include "GameplayEffectTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "Templates/SubclassOf.h"
#include "R5Ability_KillEffectApplier.generated.h"

class AActor;
class UGameplayEffect;

UCLASS(Blueprintable)
class R5_API UR5Ability_KillEffectApplier : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceLimitToEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> EffectsToApply;
    
public:
    UR5Ability_KillEffectApplier();

private:
    UFUNCTION(BlueprintCallable)
    void OnDamageDealt(AActor* TargetActor, float IncomingDamage, float DealtDamage, float ArmorDamageReduction, bool bIsKillDamage, const FGameplayEffectSpec& EffectSpec);
    
};

