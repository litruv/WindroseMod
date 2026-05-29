#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioTask_SpawnPoiChest.h"
#include "R5ScenarioTask_SpawnSharedPoiChest.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_SpawnSharedPoiChest : public UR5ScenarioTask_SpawnPoiChest {
    GENERATED_BODY()
public:
    UR5ScenarioTask_SpawnSharedPoiChest();

};

