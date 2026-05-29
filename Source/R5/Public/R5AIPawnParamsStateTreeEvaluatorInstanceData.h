#pragma once
#include "CoreMinimal.h"
#include "R5AIAnimatedActivityData.h"
#include "R5AIPawnAttackDetectionData.h"
#include "R5AIPawnBlockData.h"
#include "R5AIPawnCommonData.h"
#include "R5AIPawnParamsStateTreeEvaluatorInstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5AIPawnParamsStateTreeEvaluatorInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AIPawnCommonData AIPawnCommon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AIPawnAttackDetectionData AttackDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AIPawnBlockData Block;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AIAnimatedActivityData AnimatedActivity;
    
    FR5AIPawnParamsStateTreeEvaluatorInstanceData();
};

