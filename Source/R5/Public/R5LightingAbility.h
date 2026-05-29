#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5LightingAbility.generated.h"

class AR5LightningEffectActor;
class UR5LightingAbilityParams;

UCLASS(Blueprintable)
class R5_API UR5LightingAbility : public UR5Ability {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5LightingAbilityParams* R5LightingAbilityParams;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5LightningEffectActor* LightningEffectActor;
    
public:
    UR5LightingAbility();

};

