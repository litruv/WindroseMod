#pragma once
#include "CoreMinimal.h"
#include "R5Ability.h"
#include "R5Ability_TriggerGrantsGameplayEffectAbility.generated.h"

class UR5TriggerGrantsGameplayEffectParams;

UCLASS(Blueprintable)
class R5GAS_API UR5Ability_TriggerGrantsGameplayEffectAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5TriggerGrantsGameplayEffectParams* Params;
    
public:
    UR5Ability_TriggerGrantsGameplayEffectAbility();

};

