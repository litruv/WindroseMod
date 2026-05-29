#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5SplitItemsPopupVM.generated.h"

class UR5BaseInventorySlotVM;
class UR5VirtualInventorySlotVM;

UCLASS(Blueprintable)
class R5_API UR5SplitItemsPopupVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5VirtualInventorySlotVM* VirtualSlotVM;
    
public:
    UR5SplitItemsPopupVM();

    UFUNCTION(BlueprintCallable)
    void RevertSplit();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSourceSlotUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveSplit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5BaseInventorySlotVM* GetSourceSlotVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableItemsCount() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplySplit(int32 NewItemsCount);
    
};

