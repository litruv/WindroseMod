#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5HiringVM.generated.h"

class UR5BLInventoryItem;
class UR5BLInventoryView;
class UR5NPCParams;

UCLASS(Blueprintable)
class R5_API UR5HiringVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NPCParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* InventoryView;
    
public:
    UR5HiringVM();

    UFUNCTION(BlueprintCallable)
    void Reject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCostInInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemsInInventory(const TSoftObjectPtr<UR5BLInventoryItem>& ItemParams) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5NPCParams* GetHiringParams() const;
    
    UFUNCTION(BlueprintCallable)
    void Accept();
    
};

