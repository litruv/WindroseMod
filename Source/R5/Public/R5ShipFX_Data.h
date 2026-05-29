#pragma once
#include "CoreMinimal.h"
#include "R5ShipFX_Item.h"
#include "R5ShipFX_Data.generated.h"

USTRUCT(BlueprintType)
struct FR5ShipFX_Data {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnderWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ShipFX_Item> Items;
    
    R5_API FR5ShipFX_Data();
};

