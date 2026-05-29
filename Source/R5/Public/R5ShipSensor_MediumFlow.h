#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "Components/SphereComponent.h"
#include "ER5SignificanceLevel.h"
#include "R5ShipSensor_MediumFlowData.h"
#include "R5SignificanceInterface.h"
#include "R5ShipSensor_MediumFlow.generated.h"

class UR5NPhys_SensorSettings_MediumDetector;
class UR5ShipSensor_MediumFlowSettings;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipSensor_MediumFlow : public USphereComponent, public IR5SignificanceInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSensorDataUpdate, const FR5ShipSensor_MediumFlowData&, SensorData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSensorDataUpdate OnSensorDataUpdate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipSensor_MediumFlowSettings* SensorSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SensorData, meta=(AllowPrivateAccess=true))
    FR5ShipSensor_MediumFlowData SensorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5NPhys_SensorSettings_MediumDetector* SensorSettings_MediumDetector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel TickSignificanceLevel;
    
public:
    UR5ShipSensor_MediumFlow(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SensorData();
    

    // Fix for true pure virtual functions not being implemented
};

