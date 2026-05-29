#pragma once
#include "CoreMinimal.h"
#include "R5CraftStation.h"
#include "R5Farming_CraftStation.generated.h"

class UChildActorComponent;
class UR5FarmingStationPlantParams;

UCLASS(Blueprintable, NoExport)
class R5_API AR5Farming_CraftStation : public AR5CraftStation {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* PlantChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5FarmingStationPlantParams> FarmingStageParams;
    
public:
    AR5Farming_CraftStation(const FObjectInitializer& ObjectInitializer);

};

