#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_ShipConsumable.generated.h"

class UR5ShipConsumableParams;

UCLASS(Blueprintable)
class R5_API UR5Ability_ShipConsumable : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ShipConsumableParams> ConsumableParams;
    
public:
    UR5Ability_ShipConsumable();

};

