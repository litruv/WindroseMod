#pragma once
#include "CoreMinimal.h"
#include "R5N_WaterSubsystemInterface.h"
#include "R5N_WaterContactSystem.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UR5N_WaterContactSystem : public UR5N_WaterSubsystemInterface {
    GENERATED_BODY()
public:
    UR5N_WaterContactSystem(const FObjectInitializer& ObjectInitializer);

};

