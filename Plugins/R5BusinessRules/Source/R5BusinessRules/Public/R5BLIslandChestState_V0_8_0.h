#pragma once
#include "CoreMinimal.h"
#include "R5BLIslandChestState_V0_8_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLIslandChestState_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSharedRewardLocked;
    
    FR5BLIslandChestState_V0_8_0();
};

