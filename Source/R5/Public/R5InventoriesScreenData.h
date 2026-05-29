#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5InventoryContainerData.h"
#include "R5InventoriesScreenData.generated.h"

USTRUCT(BlueprintType)
struct FR5InventoriesScreenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5InventoryContainerData> SlotsListsByUIContainerTag;
    
    R5_API FR5InventoriesScreenData();
};

