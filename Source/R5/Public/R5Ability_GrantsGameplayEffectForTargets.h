#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_GrantsGameplayEffectForTargets.generated.h"

class AActor;
class UR5GrantsGameplayEffectForTargetParams;

UCLASS(Blueprintable)
class R5_API UR5Ability_GrantsGameplayEffectForTargets : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5GrantsGameplayEffectForTargetParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Targets;
    
public:
    UR5Ability_GrantsGameplayEffectForTargets();

};

