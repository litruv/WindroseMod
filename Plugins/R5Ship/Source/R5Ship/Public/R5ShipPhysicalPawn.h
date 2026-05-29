#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "GameFramework/Pawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5MainMeshInterface -FallbackName=R5MainMeshInterface
#include "R5MainMeshInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5MovingPlatformInterface -FallbackName=R5MovingPlatformInterface
#include "R5MovingPlatformInterface.h"
#include "R5ShipPhysicalPawn.generated.h"

class UR5BuoyancyComponent;
class UR5LandscapeContactsComponent;
class UR5N_WaterLevelComponent;
class UR5PhysSailComponent;
class UR5ShipAnchoringComponent;
class UR5ShipKinematicMovementComponent;
class UR5ShipMotorComponent;
class UR5ShipMovementReplicator;
class UR5ShipPhysicalMovementComponent;
class UR5ShipRudderComponent;
class UR5SinkingComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5SHIP_API AR5ShipPhysicalPawn : public APawn, public IR5MovingPlatformInterface, public IR5MainMeshInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PhysicsHull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BuoyancyComponent* BuoyancyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5N_WaterLevelComponent* WaterLevelComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipRudderComponent* RudderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipMotorComponent* MotorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PhysSailComponent* PhysSailComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipPhysicalMovementComponent* ShipPhysicalMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipKinematicMovementComponent* KinematicMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5LandscapeContactsComponent* LandscapeContactsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SinkingComponent* SinkingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipMovementReplicator* ShipMovementReplicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipAnchoringComponent* AnchoringComponent;
    
public:
    AR5ShipPhysicalPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetMainStaticMesh() const;
    

    // Fix for true pure virtual functions not being implemented
};

