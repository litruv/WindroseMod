#pragma once
#include "CoreMinimal.h"
#include "R5DigVolumeLootDataWholeVolume.generated.h"

class UR5BLInventoryItem;

USTRUCT(BlueprintType)
struct FR5DigVolumeLootDataWholeVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmountInVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventoryItem> Item;
    
    R5_API FR5DigVolumeLootDataWholeVolume();
};

