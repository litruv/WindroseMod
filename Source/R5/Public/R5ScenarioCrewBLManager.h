#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioCrewManagerBase.h"
#include "R5ScenarioCrewBLManager.generated.h"

class UR5BLScenarioSaveView;

UCLASS(Blueprintable)
class UR5ScenarioCrewBLManager : public UR5ScenarioCrewManagerBase {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLScenarioSaveView* ScenarioSaveView;
    
public:
    UR5ScenarioCrewBLManager();

};

