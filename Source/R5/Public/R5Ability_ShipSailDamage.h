#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "ShipSailDamageEffect.h"
#include "R5Ability_ShipSailDamage.generated.h"

UCLASS(Blueprintable)
class R5_API UR5Ability_ShipSailDamage : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, FShipSailDamageEffect> EffectsList;
    
public:
    UR5Ability_ShipSailDamage();

};

