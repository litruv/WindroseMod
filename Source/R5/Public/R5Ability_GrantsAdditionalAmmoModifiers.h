#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_GrantsAdditionalAmmoModifiers.generated.h"

class UR5GrantsAdditionalAmmoModifiersParams;

UCLASS(Blueprintable)
class R5_API UR5Ability_GrantsAdditionalAmmoModifiers : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5GrantsAdditionalAmmoModifiersParams* Params;
    
public:
    UR5Ability_GrantsAdditionalAmmoModifiers();

};

