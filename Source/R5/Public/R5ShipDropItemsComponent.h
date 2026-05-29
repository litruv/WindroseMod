#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5DropItemsComponent -FallbackName=R5DropItemsComponent
#include "R5DropItemsComponent.h"
#include "R5ShipDropItemsComponent.generated.h"

class UR5ShipDropItemsComponentParams;
class UR5ShipLootParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipDropItemsComponent : public UR5DropItemsComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipDropItemsComponentParams* InventoryDropParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDeathLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipLootParams* DeathLootParams;
    
public:
    UR5ShipDropItemsComponent(const FObjectInitializer& ObjectInitializer);

};

