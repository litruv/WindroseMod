#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Buoyancy -ObjectName=ERudderInput -FallbackName=ERudderInput
#include "ERudderInput.h"
#include "R5ShipPhysicalMovementComponent.generated.h"

class AActor;
class AController;
class APawn;
class UR5ShipMovementV2ControlData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5SHIP_API UR5ShipPhysicalMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipMovementV2ControlData* ShipMovementControlData;
    
public:
    UR5ShipPhysicalMovementComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpGearInputComplete();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerShiftGear(bool bIncrease);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerChangeRudderInput(ERudderInput InRudderInput);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerPawnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCaptainChanged(AActor* NewCaptain, AActor* OldCaptain);
    
private:
    UFUNCTION(BlueprintCallable)
    void DownGearInputComplete();
    
};

