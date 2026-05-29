#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5NPhys -ObjectName=R5NPhysRudderForceParameters -FallbackName=R5NPhysRudderForceParameters
#include "R5NPhysRudderForceParameters.h"
#include "ERudderInput.h"
#include "R5ShipRudderComponent.generated.h"

class UCurveFloat;
class UR5NPhys_ControlsSimple;
class UR5NPhys_ModelSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5BUOYANCY_API UR5ShipRudderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRudderRotationChanged, float, PreviousAngle, float, CurrentAngle);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRudderRotationChanged OnRudderRotationChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5NPhys_ControlsSimple* ControlSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ServiceMotorPowerCurveOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RudderAngleFactorCurveOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NPhys_ModelSettings* ShipModelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NPhysRudderForceParameters RudderParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ERudderInput RudderInput;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ReplicatedRudderAngle, meta=(AllowPrivateAccess=true))
    int8 ReplicatedRudderAngle;
    
public:
    UR5ShipRudderComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedRudderAngle();
    
};

