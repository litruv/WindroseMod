#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5CheatDeathAbility.generated.h"

class UR5CheatDeathAbilityParams;

UCLASS(Blueprintable)
class R5_API UR5CheatDeathAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CheatDeathAbilityParams* Params;
    
public:
    UR5CheatDeathAbility();

};

