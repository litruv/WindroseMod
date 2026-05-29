#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5InventoryRarityItemFilter.h"
#include "R5InventoryRarityItemFilterParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5InventoryRarityItemFilterParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5InventoryRarityItemFilter> RarityItemFilters;
    
    UR5InventoryRarityItemFilterParams();

};

