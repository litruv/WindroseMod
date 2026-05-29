#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5InventoryContainerInstanceData.generated.h"

class UR5BaseInventorySlotListVM;

USTRUCT(BlueprintType)
struct FR5InventoryContainerInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UR5BaseInventorySlotListVM*> SlotLists;
    
    R5_API FR5InventoryContainerInstanceData();
};

