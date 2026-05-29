#pragma once
#include "CoreMinimal.h"
#include "R5BLIslandChestState.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLIslandChestState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSharedRewardLocked;
    
    FR5BLIslandChestState();
};

