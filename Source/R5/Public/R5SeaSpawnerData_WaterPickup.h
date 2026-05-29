#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5SeaSpawnerData.h"
#include "WaterAreaWaterPickupSpawnVariation.h"
#include "R5SeaSpawnerData_WaterPickup.generated.h"

UCLASS(Blueprintable, DefaultConfig, NonTransient, Config=Game)
class R5_API UR5SeaSpawnerData_WaterPickup : public UR5SeaSpawnerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FWaterAreaWaterPickupSpawnVariation> WaterAreaSpawnParameters;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnLimit;
    
    UR5SeaSpawnerData_WaterPickup();

};

