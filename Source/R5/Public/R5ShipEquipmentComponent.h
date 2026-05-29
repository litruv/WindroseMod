#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5DynamicComponent -FallbackName=R5DynamicComponent
#include "R5DynamicComponent.h"
#include "ShipEquipmentSlot.h"
#include "R5ShipEquipmentComponent.generated.h"

class UR5BLInventoryModuleView;
class UR5BLInventoryView;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipEquipmentComponent : public UR5DynamicComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* InventoryView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BLInventoryModuleView* EquipmentModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FShipEquipmentSlot> EquipmentSlots;
    
public:
    UR5ShipEquipmentComponent(const FObjectInitializer& ObjectInitializer);

};

