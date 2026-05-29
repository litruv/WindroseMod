#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5InventoryItemPresets.generated.h"

class UR5BLLootParams;
class UR5InventoryItemList;

UCLASS(Blueprintable)
class R5INVENTORY_API UR5InventoryItemPresets : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UR5InventoryItemList*> Presets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSoftObjectPtr<UR5BLLootParams>> LootTablesPresets;
    
    UR5InventoryItemPresets();

};

