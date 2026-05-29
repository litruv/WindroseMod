#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5DropItemInterface -FallbackName=R5DropItemInterface
#include "R5DropItemInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5InventoryInterface -FallbackName=R5InventoryInterface
#include "R5InventoryInterface.h"
#include "R5BuildingBlock_WithScenario.h"
#include "R5ItemsCreatorInterface.h"
#include "R5ShipDockInterface.h"
#include "R5BuildingBlock_ShipDock.generated.h"

class UR5BLInventoryView;
class UR5BLShipDockView;
class UR5CommonInteractionTargetComponent;
class UR5DropItemsComponent;
class UR5ProximityActorComponent;
class USceneComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5BuildingBlock_ShipDock : public AR5BuildingBlock_WithScenario, public IR5InventoryInterface, public IR5ShipDockInterface, public IR5DropItemInterface, public IR5ItemsCreatorInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CommonInteractionTargetComponent* InteractionTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BLShipDockView* ShipDockView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ProximityActorComponent* ProximityActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DropItemsComponent* DropItemsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ItemSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* InventoryView;
    
public:
    AR5BuildingBlock_ShipDock(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

