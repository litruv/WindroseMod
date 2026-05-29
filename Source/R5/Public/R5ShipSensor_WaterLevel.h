#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
#include "Components/CapsuleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5SignificanceLevel.h"
#include "R5ShipSensor_WaterLevelData.h"
#include "R5SignificanceInterface.h"
#include "R5ShipSensor_WaterLevel.generated.h"

class UR5NPhys_SensorSettings_WaterLevel;
class UR5ShipSensor_WaterLevel;
class UR5ShipSensor_WaterLevelSettings;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipSensor_WaterLevel : public UCapsuleComponent, public IR5SignificanceInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSensorDataUpdate, UR5ShipSensor_WaterLevel*, Sensor, const FR5ShipSensor_WaterLevelData&, SensorData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSensorDataUpdate OnSensorDataUpdate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SensorTag;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipSensor_WaterLevelSettings* SensorSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NPhys_SensorSettings_WaterLevel* SensorSettings_WaterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel TickSignificanceLevel;
    
public:
    UR5ShipSensor_WaterLevel(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

