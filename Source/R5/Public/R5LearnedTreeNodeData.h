#pragma once
#include "CoreMinimal.h"
#include "R5LearnedTreeNodeData.generated.h"

class UR5BLPerkParams;

USTRUCT(BlueprintType)
struct FR5LearnedTreeNodeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLPerkParams* PerkParams;
    
    R5_API FR5LearnedTreeNodeData();
};

