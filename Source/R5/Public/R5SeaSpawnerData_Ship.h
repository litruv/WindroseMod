#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5SeaSpawnerData.h"
#include "WaterAreaShipSpawnVariation.h"
#include "R5SeaSpawnerData_Ship.generated.h"

UCLASS(Blueprintable, DefaultConfig, NonTransient, Config=Game)
class R5_API UR5SeaSpawnerData_Ship : public UR5SeaSpawnerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnRingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FWaterAreaShipSpawnVariation> WaterAreaSpawnParameters;
    
    UR5SeaSpawnerData_Ship();

};

