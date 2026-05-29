#pragma once
#include "CoreMinimal.h"
#include "R5BLProgressionTree_V0_9_0.h"
#include "R5BLEntityProgression_V0_9_0.generated.h"

class UR5BLEntityProgressionParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLEntityProgression_V0_9_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLEntityProgressionParams> EntityProgressionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLProgressionTree_V0_9_0 TalentTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLProgressionTree_V0_9_0 StatTree;
    
    FR5BLEntityProgression_V0_9_0();
};

