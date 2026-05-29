#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5DropItemInterface -FallbackName=R5DropItemInterface
#include "R5DropItemInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5InventoryInterface -FallbackName=R5InventoryInterface
#include "R5InventoryInterface.h"
#include "R5BuildingBlock_WithScenario.h"
#include "R5LootableInventoryBox.generated.h"

class UR5CommonInteractionTargetComponent;
class UR5DropItemsComponent;
class USceneComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5LootableInventoryBox : public AR5BuildingBlock_WithScenario, public IR5InventoryInterface, public IR5DropItemInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CommonInteractionTargetComponent* InteractTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ItemSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DropItemsComponent* DropItemsComponent;
    
public:
    AR5LootableInventoryBox(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

