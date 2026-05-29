#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLRecipeItem -FallbackName=R5BLRecipeItem
#include "R5BLRecipeItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLRewardWithAttributeModifier -FallbackName=R5BLRewardWithAttributeModifier
#include "R5BLRewardWithAttributeModifier.h"
#include "R5InventoryItemList.generated.h"

UCLASS(Blueprintable)
class R5INVENTORY_API UR5InventoryItemList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLRecipeItem> ItemsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRewardWithAttributeModifier ItemsListWithAttributeModifier;
    
    UR5InventoryItemList();

};

