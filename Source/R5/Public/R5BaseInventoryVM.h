#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "ER5KeyModifier.h"
#include "R5InventoriesScreenData.h"
#include "R5InventoryContainerInstanceData.h"
#include "R5SlotClickActionInfo.h"
#include "R5BaseInventoryVM.generated.h"

class UR5BLInventoryView;
class UR5BaseInventorySlotListVM;
class UR5MVVMObserver_PersonalChest;

UCLASS(Blueprintable)
class R5_API UR5BaseInventoryVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5InventoryContainerInstanceData> UIInventoryContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UR5BLInventoryView*> HandledInventories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_PersonalChest* PersonalChestObserver;
    
public:
    UR5BaseInventoryVM();

    UFUNCTION(BlueprintCallable)
    void Sort(FGameplayTag InventoryContainerTag);
    
    UFUNCTION(BlueprintCallable)
    void SetInputKeyModifier(ER5KeyModifier NewInputStatModifier);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnClickedBySlot(const FR5SlotClickActionInfo& ClickInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventoryEmpty(FGameplayTag InventoryContainerTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5BaseInventorySlotListVM* GetSlotsListByContainerTag(FGameplayTag InventoryContainerTag, FGameplayTag SlotListContainerTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5InventoryContainerInstanceData GetInventorySlotsListsData(FGameplayTag InventoryContainerTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInventoryName(const FGameplayTag& InventoryContainerTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5InventoriesScreenData GetInventoryData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5KeyModifier GetInputKeyModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSort(FGameplayTag InventoryContainerTag, const FGameplayTagContainer& SlotListContainerTags) const;
    
};

