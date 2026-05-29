#pragma once
#include "CoreMinimal.h"
#include "R5BLProgressionTreeNode.h"
#include "R5BLProgressionTree.generated.h"

class UR5BLProgressionTreeParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLProgressionTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLProgressionTreeParams> ProgressionTreeParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressionPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLProgressionTreeNode> Nodes;
    
    FR5BLProgressionTree();
};

