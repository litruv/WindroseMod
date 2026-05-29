#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectSpec -FallbackName=GameplayEffectSpec
#include "GameplayEffectTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_ApplyGEOnNearTargetForStacksOnHit.generated.h"

class AActor;
class UR5ApplyGEOnNearTargetForStacksOnHitParams;

UCLASS(Blueprintable)
class R5_API UR5Ability_ApplyGEOnNearTargetForStacksOnHit : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ApplyGEOnNearTargetForStacksOnHitParams* Params;
    
public:
    UR5Ability_ApplyGEOnNearTargetForStacksOnHit();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageDealt(AActor* InActor, float InIncomingDamage, float InDealtDamage, float ArmorDamageReduction, bool bIsKilled, const FGameplayEffectSpec& InGameplayEffectSpec);
    
};

