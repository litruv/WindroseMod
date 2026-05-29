#pragma once
#include "CoreMinimal.h"
#include "R5BLProgressionTree.h"
#include "R5BLEntityProgression.generated.h"

class UR5BLEntityProgressionParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLEntityProgression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLEntityProgressionParams> EntityProgressionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLProgressionTree TalentTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLProgressionTree StatTree;
    
    FR5BLEntityProgression();
};

