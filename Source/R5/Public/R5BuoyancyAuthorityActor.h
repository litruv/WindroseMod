#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5MainMeshInterface -FallbackName=R5MainMeshInterface
#include "R5MainMeshInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5MovingPlatformInterface -FallbackName=R5MovingPlatformInterface
#include "R5MovingPlatformInterface.h"
#include "R5BuoyancyAuthorityActor.generated.h"

class UR5BuoyancyComponent;
class UR5NPhys_ModelSettings;
class UR5N_WaterLevelComponent;
class UR5ShipKinematicMovementComponent;
class UR5ShipMovementReplicator;
class UStaticMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5BuoyancyAuthorityActor : public AActor, public IR5MainMeshInterface, public IR5MovingPlatformInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RootMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BuoyancyComponent* BuoyancyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5N_WaterLevelComponent* WaterLevelComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipKinematicMovementComponent* KinematicMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipMovementReplicator* ShipMovementReplicator;
    
public:
    AR5BuoyancyAuthorityActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientUpdatePhysModelSettings(UR5NPhys_ModelSettings* ModelSettings);
    

    // Fix for true pure virtual functions not being implemented
};

