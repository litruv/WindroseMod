#pragma once
#include "CoreMinimal.h"
#include "R5BLProgressionTreeNodeInfo.h"
#include "R5BLProgressionTreeState.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLProgressionTreeState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FreePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLProgressionTreeNodeInfo> Nodes;
    
    FR5BLProgressionTreeState();
};

