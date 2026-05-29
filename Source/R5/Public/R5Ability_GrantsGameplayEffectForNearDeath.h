#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectSpec -FallbackName=GameplayEffectSpec
#include "GameplayEffectTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_GrantsGameplayEffectForNearDeath.generated.h"

class APawn;
class UR5GrantsGameplayEffectForNearDeathParams;

UCLASS(Blueprintable)
class R5_API UR5Ability_GrantsGameplayEffectForNearDeath : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5GrantsGameplayEffectForNearDeathParams* Params;
    
public:
    UR5Ability_GrantsGameplayEffectForNearDeath();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnDead(APawn* DeadPawn, const FGameplayEffectSpec& GameplayEffectSpec, float IncomingDamage, float DealtDamage);
    
};

