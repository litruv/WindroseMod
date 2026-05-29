#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioCrewSettings.h"
#include "R5ScenarioCrewSettings_Ship.h"
#include "R5ScenarioCrewSettings_ForShip.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5ScenarioCrewSettings_ForShip : public UR5ScenarioCrewSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ScenarioCrewSettings_Ship ShipSettings;
    
    UR5ScenarioCrewSettings_ForShip();

};

