#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetDataHandle -FallbackName=GameplayAbilityTargetDataHandle
#include "Abilities/GameplayAbilityTargetTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5DamageByEventAbility.generated.h"

class UR5AbilityTask_WeaponTraceByEvent;
class UR5DamageByEventAbilityParams;

UCLASS(Blueprintable)
class R5_API UR5DamageByEventAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DamageByEventAbilityParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_WeaponTraceByEvent* TraceTask;
    
public:
    UR5DamageByEventAbility();

private:
    UFUNCTION(BlueprintCallable)
    void OnHit(FGameplayAbilityTargetDataHandle TargetDataHandle);
    
};

