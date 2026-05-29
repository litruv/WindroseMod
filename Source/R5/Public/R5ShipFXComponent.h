#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5SignificanceLevel.h"
#include "R5ShipFX_Data.h"
#include "R5ShipSensor_WaterLevelData.h"
#include "R5SignificanceInterface.h"
#include "R5ShipFXComponent.generated.h"

class UR5ShipFXParams;
class UR5ShipSensor_WaterLevel;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipFXComponent : public UActorComponent, public IR5SignificanceInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipFXParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel KeelWaterSignificanceLevel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5ShipFX_Data> SensorsWithFXs;
    
public:
    UR5ShipFXComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void WaterLevelSensorDataUpdate(UR5ShipSensor_WaterLevel* Sensor, const FR5ShipSensor_WaterLevelData& SensorData);
    

    // Fix for true pure virtual functions not being implemented
};

