#pragma once
#include "CoreMinimal.h"
#include "R5BLShipCustomizationItemData.generated.h"

class UR5BLInventoryItem;
class UTexture2D;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLShipCustomizationItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventoryItem> CustomizationItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ItemTexture;
    
    FR5BLShipCustomizationItemData();
};

