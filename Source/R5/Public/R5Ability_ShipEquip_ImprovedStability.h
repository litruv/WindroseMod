#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_ShipEquip_ImprovedStability.generated.h"

class UR5ShipImprovedStabilityParams;

UCLASS(Blueprintable)
class R5_API UR5Ability_ShipEquip_ImprovedStability : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ShipImprovedStabilityParams> StabilityParams;
    
public:
    UR5Ability_ShipEquip_ImprovedStability();

};

