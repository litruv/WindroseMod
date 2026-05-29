#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5NPhys -ObjectName=R5NPhysMotorForceParameters -FallbackName=R5NPhysMotorForceParameters
#include "R5NPhysMotorForceParameters.h"
#include "R5ShipMotorComponent.generated.h"

class UCurveFloat;
class UR5NPhys_ModelSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5BUOYANCY_API UR5ShipMotorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGearChanged, int32, Value);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MotorPowerMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MotorPowerCurveOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SlowdownForceMagnitudeCurveOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NPhys_ModelSettings* ShipModelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NPhysMotorForceParameters MotorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentGear, meta=(AllowPrivateAccess=true))
    int32 CurrentGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsBoostAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BoostActive, meta=(AllowPrivateAccess=true))
    bool bIsBoostActive;
    
public:
    UR5ShipMotorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentGear();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BoostActive() const;
    
};

