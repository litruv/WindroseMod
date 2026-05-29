#pragma once
#include "CoreMinimal.h"
#include "R5BLLevelData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 exp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TalentPointsReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatPointsReward;
    
    FR5BLLevelData();
};

