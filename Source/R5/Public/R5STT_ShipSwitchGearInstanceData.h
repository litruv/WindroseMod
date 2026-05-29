#pragma once
#include "CoreMinimal.h"
#include "R5STT_ShipSwitchGearInstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_ShipSwitchGearInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetGear;
    
    FR5STT_ShipSwitchGearInstanceData();
};

