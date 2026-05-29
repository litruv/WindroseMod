#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5LaunchState.h"
#include "R5PhysicsLaunchBoneTransform.h"
#include "R5PhysicsLaunchComponent.generated.h"

class UAnimMontage;
class UPhysicsHandleComponent;
class UR5PhysicsLaunchParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5PHYSICSLAUNCH_API UR5PhysicsLaunchComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRagdollUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRagdollUpdated OnGetUpStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRagdollUpdated OnRagdollFinished;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5PhysicsLaunchParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPhysicsHandleComponent*> PhysicsHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LaunchState, meta=(AllowPrivateAccess=true))
    FR5LaunchState LaunchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ChosenGetUpMontage;
    
public:
    UR5PhysicsLaunchComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LaunchState(const FR5LaunchState& PreviousState);
    
    UFUNCTION(BlueprintCallable)
    void OnGetUpMontageFinished(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticastUpdateTransform(const TArray<FR5PhysicsLaunchBoneTransform>& BoneLocations);
    
};

