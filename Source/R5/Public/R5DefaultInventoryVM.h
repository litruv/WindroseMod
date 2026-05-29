#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5BaseInventoryVM.h"
#include "R5DefaultInventoryVM.generated.h"

class UR5SplitItemsPopupVM;
class UR5VirtualInventorySlotVM;

UCLASS(Blueprintable)
class R5_API UR5DefaultInventoryVM : public UR5BaseInventoryVM {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FR5OnDragStatusChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5OnActionMoveOperationFinished, bool, bSuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnDragStatusChanged OnDragStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnActionMoveOperationFinished OnActionMoveOperationFinished;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5VirtualInventorySlotVM* VirtualInventorySlotVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SplitItemsPopupVM* SplitItemsPopupVM;
    
public:
    UR5DefaultInventoryVM();

    UFUNCTION(BlueprintCallable)
    void SwitchAutoFillAmmoStatus(FGameplayTag InventoryContainerTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVirtualSlotUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveAll(FGameplayTag InventoryContainerTag, bool bOnlyStack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSplitItemActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDragActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoFillAmmoEnabled(FGameplayTag InventoryContainerTag) const;
    
    UFUNCTION(BlueprintCallable)
    void InterruptSplitItems();
    
    UFUNCTION(BlueprintCallable)
    void InterruptDragAndDrop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5VirtualInventorySlotVM* GetVirtualSlotVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5SplitItemsPopupVM* GetSplitItemsPopupVM() const;
    
    UFUNCTION(BlueprintCallable)
    void DropItemsFromDrag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMoveAll(FGameplayTag InventoryContainerTag, bool bOnlyStack) const;
    
};

