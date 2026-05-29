#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5VirtualInventorySlotVM.generated.h"

class UR5BLInventorySlotView;
class UR5BaseInventorySlotVM;

UCLASS(Blueprintable)
class R5_API UR5VirtualInventorySlotVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventorySlotView* SourceSlotView;
    
public:
    UR5VirtualInventorySlotVM();

    UFUNCTION(BlueprintCallable)
    void OverrideItemsCount(int32 NewItemsCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItemsCountOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVirtualItemsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5BaseInventorySlotVM* GetSourceSlotVM() const;
    
};

