#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordPath -FallbackName=R5BLRecordPath
#include "R5BLRecordPath.h"
#include "R5BLItemAttributeModifiersData.h"
#include "R5BLLootTableModel.h"
#include "R5BLApplyItemsFromLootTableModel.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLApplyItemsFromLootTableModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLRecordPath> InventoriesPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLLootTableModel LootTableModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLItemAttributeModifiersData ItemAttributeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDropExtraItems;
    
    FR5BLApplyItemsFromLootTableModel();
};

