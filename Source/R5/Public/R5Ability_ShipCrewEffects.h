#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "ShipCrewEffect.h"
#include "R5Ability_ShipCrewEffects.generated.h"

class UR5BLScenarioSave_CrewView;

UCLASS(Blueprintable)
class R5_API UR5Ability_ShipCrewEffects : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FShipCrewEffect> EffectsList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLScenarioSave_CrewView* CrewView;
    
public:
    UR5Ability_ShipCrewEffects();

};

