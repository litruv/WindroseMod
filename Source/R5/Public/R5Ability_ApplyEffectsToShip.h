#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_ApplyEffectsToShip.generated.h"

UCLASS(Blueprintable)
class R5_API UR5Ability_ApplyEffectsToShip : public UR5Ability {
    GENERATED_BODY()
public:
    UR5Ability_ApplyEffectsToShip();

};

