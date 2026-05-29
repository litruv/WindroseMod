#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5DrawWeaponAbility.generated.h"

class UR5DrawWeaponAbilityTechParams;

UCLASS(Blueprintable)
class R5_API UR5DrawWeaponAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DrawWeaponAbilityTechParams* TechParams;
    
public:
    UR5DrawWeaponAbility();

};

