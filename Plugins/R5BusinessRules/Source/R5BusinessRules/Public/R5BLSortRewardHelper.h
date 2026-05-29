#pragma once
#include "CoreMinimal.h"
#include "R5BLReward.h"
#include "R5BLSortRewardHelper.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLSortRewardHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLReward AvailableReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLReward ExtraReward;
    
    FR5BLSortRewardHelper();
};

