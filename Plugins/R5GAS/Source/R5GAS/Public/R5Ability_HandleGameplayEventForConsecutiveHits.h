#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectSpec -FallbackName=GameplayEffectSpec
#include "GameplayEffectTypes.h"
#include "R5Ability.h"
#include "R5HandleGameplayEventForConsecutiveHitsData.h"
#include "R5Ability_HandleGameplayEventForConsecutiveHits.generated.h"

class AActor;
class UR5HandleGameplayEventForConsecutiveHitsParams;

UCLASS(Blueprintable)
class R5GAS_API UR5Ability_HandleGameplayEventForConsecutiveHits : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5HandleGameplayEventForConsecutiveHitsParams* Params;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, double> TargetCooldownStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FR5HandleGameplayEventForConsecutiveHitsData> TargetHits;
    
public:
    UR5Ability_HandleGameplayEventForConsecutiveHits();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageDealt(AActor* TargetActor, float IncomingDamage, float DealtDamage, float ArmorDamageReduction, bool bIsKillDamage, const FGameplayEffectSpec& EffectSpec);
    
};

