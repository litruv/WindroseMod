#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5AimingComponent.generated.h"

class AAIController;
class UInputAction;
class UObject;
class UR5AimingComponentParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5AimingComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* LookAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AimingComponentParams* Params;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CompressedMeleePitch, meta=(AllowPrivateAccess=true))
    uint8 CompressedMeleePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CompressedAimPitch, meta=(AllowPrivateAccess=true))
    uint8 CompressedAimPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CompressedAimYaw, meta=(AllowPrivateAccess=true))
    uint8 CompressedAimYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentTarget, meta=(AllowPrivateAccess=true))
    UObject* CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController* Controller;
    
public:
    UR5AimingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CompressedMeleePitch();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CompressedAimYaw();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CompressedAimPitch();
    
};

