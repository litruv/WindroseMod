#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5InventoryItemsInfoFilter.h"
#include "R5SC_Base.h"
#include "R5HFSMInventoryItemsInfoComponent.generated.h"

class UR5InventoryItemsInfoVM;
class UR5ItemsInfoWithFilterVM;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5HFSMInventoryItemsInfoComponent : public UR5SC_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5InventoryItemsInfoFilter> InventoryItemsInfoFilters;
    
public:
    UR5HFSMInventoryItemsInfoComponent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5InventoryItemsInfoVM* GetItemsInfoVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ItemsInfoWithFilterVM* GetItemsFilter(FGameplayTag FilterKey) const;
    
};

