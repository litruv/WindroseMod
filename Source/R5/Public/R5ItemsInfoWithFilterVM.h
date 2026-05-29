#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5InventoryItemInfo.h"
#include "R5ItemsInfoWithFilterVM.generated.h"

class UR5BLInventoryItem;
class UR5BLInventoryView;

UCLASS(Blueprintable)
class R5_API UR5ItemsInfoWithFilterVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* InventoryView;
    
public:
    UR5ItemsInfoWithFilterVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5InventoryItemInfo> GetItemsInfoWithTypeFilter(const FGameplayTagContainer& ItemsTypesFilter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5InventoryItemInfo> GetItemsInfoWithAllFilters(const FGameplayTagContainer& ItemsTypesFilter, const TArray<TSoftObjectPtr<UR5BLInventoryItem>>& ItemsParamsFilter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5InventoryItemInfo> GetItemsInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetFilterKey() const;
    
};

