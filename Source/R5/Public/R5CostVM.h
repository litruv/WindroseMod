#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemsStackData -FallbackName=R5BLItemsStackData
#include "R5BLItemsStackData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5CostBucketData.h"
#include "R5UIRecipeItemData.h"
#include "R5CostVM.generated.h"

class UR5MVVMObserver_Inventories;

UCLASS(Blueprintable)
class R5_API UR5CostVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_Inventories* InventoriesObserver;
    
public:
    UR5CostVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCostItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCostWithSort(const FGameplayTagContainer& BucketsByItemTypes, TMap<FGameplayTag, FR5CostBucketData>& SortedCost, TArray<FR5UIRecipeItemData>& OtherCost) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5BLItemsStackData> GetCostItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5UIRecipeItemData> GetCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRemoveAllItemsFromInventories() const;
    
};

