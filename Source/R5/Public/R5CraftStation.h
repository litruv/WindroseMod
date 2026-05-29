#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5DropItemInterface -FallbackName=R5DropItemInterface
#include "R5DropItemInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5InventoryInterface -FallbackName=R5InventoryInterface
#include "R5InventoryInterface.h"
#include "R5BuildingBlock_WithScenario.h"
#include "R5CraftInterface.h"
#include "R5ItemsCreatorInterface.h"
#include "R5CraftStation.generated.h"

class UR5BLInventoryView;
class UR5CommonInteractionTargetComponent;
class UR5CraftHandlerComponent;
class UR5DropItemsComponent;
class USceneComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5CraftStation : public AR5BuildingBlock_WithScenario, public IR5InventoryInterface, public IR5DropItemInterface, public IR5CraftInterface, public IR5ItemsCreatorInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CommonInteractionTargetComponent* InteractTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ItemSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DropItemsComponent* DropItemsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CraftHandlerComponent* CraftHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* InventoryView;
    
public:
    AR5CraftStation(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnCraftComponentUpdate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5BLInventoryView* GetInventoryView() const;
    

    // Fix for true pure virtual functions not being implemented
};

