#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5TargetLock_ControlComponent.generated.h"

class UR5TargetLock_ControlParams;
class UR5TargetLock_TargetComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5TargetLock_ControlComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetLocked, UR5TargetLock_TargetComponent*, Target);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTargetCleared);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetLocked OnTargetLocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetCleared OnTargetCleared;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5TargetLock_ControlParams* Params;
    
public:
    UR5TargetLock_ControlComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSwitchTarget(UR5TargetLock_TargetComponent* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEnableTargetLock(UR5TargetLock_TargetComponent* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerClearTargetLock();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTargetSocket() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTargetSocketName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetTargetSceneComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5TargetLock_TargetComponent* GetTarget() const;
    
};

