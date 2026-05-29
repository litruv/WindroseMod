#pragma once
#include "CoreMinimal.h"
#include "R5Ability.h"
#include "R5Ability_SetEffects.generated.h"

class UR5SetEffectsParams;

UCLASS(Blueprintable)
class R5GAS_API UR5Ability_SetEffects : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SetEffectsParams* Params;
    
public:
    UR5Ability_SetEffects();

};

