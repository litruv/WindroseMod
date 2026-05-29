#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMListVM -FallbackName=R5MVVMListVM
#include "R5MVVMListVM.h"
#include "ER5InventorySlotClickType.h"
#include "ER5KeyModifier.h"
#include "R5SlotClickActionInfo.h"
#include "Templates/SubclassOf.h"
#include "R5BaseInventorySlotListVM.generated.h"

class UR5BLInventoryModuleView;
class UR5BLInventorySlotView;
class UR5BLInventoryView;
class UR5MVVMView;

UCLASS(Blueprintable)
class R5_API UR5BaseInventorySlotListVM : public UR5MVVMListVM {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5OnClickBySlot, const FR5SlotClickActionInfo&, ClickInfo);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnClickBySlot OnClickBySlot;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* InventoryView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventoryModuleView* InventoryModuleView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5BLInventorySlotView*> SlotsView;
    
public:
    UR5BaseInventorySlotListVM();

protected:
    UFUNCTION(BlueprintCallable)
    void OnClickBySlotAction(int32 SlotIndex, ER5InventorySlotClickType ClickType, ER5KeyModifier ClickModifier);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPersonalSlotsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOperationsBlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPersonalSlotsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UR5MVVMView> GetSlotListWidgetClass() const;
    
};

