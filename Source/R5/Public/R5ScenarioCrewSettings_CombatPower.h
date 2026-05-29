#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5ScenarioCrewSettings_CrewCombatPowerData.h"
#include "R5ScenarioCrewSettings_CombatPower.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5ScenarioCrewSettings_CombatPower : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ScenarioCrewSettings_CrewCombatPowerData CrewCombatPowerData;
    
    UR5ScenarioCrewSettings_CombatPower();

};

