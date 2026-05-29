#include "R5ShipPhysicalPawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Buoyancy -ObjectName=R5BuoyancyComponent -FallbackName=R5BuoyancyComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Buoyancy -ObjectName=R5LandscapeContactsComponent -FallbackName=R5LandscapeContactsComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Buoyancy -ObjectName=R5PhysSailComponent -FallbackName=R5PhysSailComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Buoyancy -ObjectName=R5ShipAnchoringComponent -FallbackName=R5ShipAnchoringComponent
#include "R5ShipAnchoringComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Buoyancy -ObjectName=R5ShipMotorComponent -FallbackName=R5ShipMotorComponent
#include "R5ShipMotorComponent.h"
#include "Components/StaticMeshComponent.h"
#include "R5BuoyancyComponent.h"
#include "R5LandscapeContactsComponent.h"
#include "R5PhysSailComponent.h"
#include "R5ShipRudderComponent.h"
#include "R5SinkingComponent.h"
#include "R5N_WaterLevelComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Buoyancy -ObjectName=R5ShipRudderComponent -FallbackName=R5ShipRudderComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Buoyancy -ObjectName=R5SinkingComponent -FallbackName=R5SinkingComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Weather -ObjectName=R5N_WaterLevelComponent -FallbackName=R5N_WaterLevelComponent
#include "R5ShipKinematicMovementComponent.h"
#include "R5ShipMovementReplicator.h"
#include "R5ShipPhysicalMovementComponent.h"

void AR5ShipPhysicalPawn::StaticRegisterNativesAR5ShipPhysicalPawn()
{
}


AR5ShipPhysicalPawn::AR5ShipPhysicalPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootComponent"));
    this->PhysicsHull = (UStaticMeshComponent*)RootComponent;
    this->BuoyancyComponent = CreateDefaultSubobject<UR5BuoyancyComponent>(TEXT("BuoyancyComponent"));
    this->WaterLevelComponent = CreateDefaultSubobject<UR5N_WaterLevelComponent>(TEXT("WaterLevelComponent"));
    this->RudderComponent = CreateDefaultSubobject<UR5ShipRudderComponent>(TEXT("RudderComponent"));
    this->MotorComponent = CreateDefaultSubobject<UR5ShipMotorComponent>(TEXT("MotorComponent"));
    this->PhysSailComponent = CreateDefaultSubobject<UR5PhysSailComponent>(TEXT("PhysSailComponent"));
    this->ShipPhysicalMovement = CreateDefaultSubobject<UR5ShipPhysicalMovementComponent>(TEXT("UR5N_MovementComponent"));
    this->KinematicMovementComponent = CreateDefaultSubobject<UR5ShipKinematicMovementComponent>(TEXT("KinematicMovement"));
    this->LandscapeContactsComponent = CreateDefaultSubobject<UR5LandscapeContactsComponent>(TEXT("LandscapeContacts"));
    this->SinkingComponent = CreateDefaultSubobject<UR5SinkingComponent>(TEXT("SinkingComponent"));
    this->ShipMovementReplicator = CreateDefaultSubobject<UR5ShipMovementReplicator>(TEXT("ShipMovementReplicator"));
    this->AnchoringComponent = CreateDefaultSubobject<UR5ShipAnchoringComponent>(TEXT("AnchoringComponent"));
}

UStaticMeshComponent* AR5ShipPhysicalPawn::GetMainStaticMesh() const {
    return NULL;
}


