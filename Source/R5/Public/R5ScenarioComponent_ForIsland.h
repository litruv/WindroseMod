#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioComponent.h"
#include "R5ScenarioComponent_ForIsland.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ScenarioComponent_ForIsland : public UR5ScenarioComponent {
    GENERATED_BODY()
public:
    UR5ScenarioComponent_ForIsland(const FObjectInitializer& ObjectInitializer);

};

