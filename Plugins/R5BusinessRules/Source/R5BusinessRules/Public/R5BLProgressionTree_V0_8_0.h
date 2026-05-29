#pragma once
#include "CoreMinimal.h"
#include "R5BLProgressionTreeNode_V0_8_0.h"
#include "R5BLProgressionTree_V0_8_0.generated.h"

class UR5BLProgressionTreeParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLProgressionTree_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLProgressionTreeParams> ProgressionTreeParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressionPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLProgressionTreeNode_V0_8_0> Nodes;
    
    FR5BLProgressionTree_V0_8_0();
};

